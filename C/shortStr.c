#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int shortStr(char *src, char *sub, char *dst){
    int subLen = strlen(sub);
    int *Num = calloc(strlen(sub), sizeof(int));
    int head = 0;
    int tail = 0;
    int tmp = 0, index = 0;
    while(tmp < subLen && src[tail] != '\0'){
        for(index = 0; index < subLen; ++index){
            if(src[tail] == sub[index]){
                if(0 == Num[index])
                    ++tmp;
                Num[index]++;
            }
        }
        ++tail;
    }
    if(src[tail] == '\0'){
        free(Num);
        return 0;
    }
    goto BACK;
FRONT:
    for(; tmp > subLen && src[tail] != '\0';++tail){
        for(index = 0; index < subLen; ++index){
            if(src[tail] == sub[index]){
                if(0 == Num[index]){
                    ++tmp;
                }
                Num[index]++;
            }
        }
    }
    if(src[tail] != '\0')
        goto BACK;
    free(Num);
    return 1;
BACK:
    for(; ; ++head){
        for(index = 0; index < subLen; ++index){
            if(src[head] == sub[index]){
                if(tmp == subLen && Num[index] == 1){
                    --tmp;
                    strncpy(dst, src, tail-head+1);
                    dst[tail-head+1] = '\0';
                }
                else if(tmp == subLen - 1 && Num[index] == 1){
                    goto FRONT;
                }
                else
                    --tmp;
                --Num[index];
            }
        }
    }
}
int main(int argc, char **argv){
    char longstr[] = "aedclkfcbdacbcd";
    char shortstr[] = "abc";
    char *dst = calloc(strlen(longstr), sizeof(char));
    if(shortStr(longstr, shortstr, dst))
        printf("%s\n", dst);
    free(dst);
    return 0;
}

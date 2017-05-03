#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(x, y) \
    x = (x) + (y),\
    y = (x) - (y),\
    x = (x) - (y)

void reverse(char *pstr){
    int head = 0, tail = strlen(pstr) - 1;
    while(head < tail){
        for(; ' ' == pstr[head]; ++head);
        if(head == tail)
            break;
        for(; ' ' == pstr[tail]; --tail);
        if(head == tail)
            break;
        SWAP(pstr[head] , pstr[tail]);
        ++head;
        --tail;
    }
}

int main(int argc, char **argv){
    char string[] = "This is an example";
    reverse(string);
    printf("%s\n", string);
    return 0;
}

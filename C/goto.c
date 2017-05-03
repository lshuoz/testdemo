#include <stdio.h>

int main(){
    int i = 0;
    while(i < 5){
jump:
        printf("%d\n", i);
        if(i == 3){
            i += 2;
            goto jump;
        }
        ++i;
    }

    return 0;
}

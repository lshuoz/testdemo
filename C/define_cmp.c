#include <stdio.h>

#define CHARA 0x31

int main(){
    unsigned char string[] = "123456";
    if(string[0] == CHARA){
        printf("equel\n");
    }
}

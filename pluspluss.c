#include <stdio.h>

int main(int argc, char **argv){
    int a = 4;
    int b = 5;
    printf("0x%d\n", &(a++));
    printf("%d\n", a+++++b);
    return 0;
}

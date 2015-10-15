#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int (*pf)(char *format, ...);

void callFuncAddr(int x, int y){
    int a;
    int b;
    printf("varInCall:0x%x\n", &a);
    printf("readParam1:0x%x\n", &x);
    printf("readParam2:0x%x\n", &y);
}

int main(int argc, char **argv){
    int a = 2;
    int b = 3;
    char *pconst = "hello world";
    pf pprintf = printf;
    printf("code:0x%x\n", pprintf);
    printf("var1:0x%x\n", &a);
    printf("var2:0x%x\n", &b);
    printf("const:0x%x\n", pconst);
    printf("0x%x\n");
    callFuncAddr(a, b);

    a = printf("%*s\n", 6, "shuo");
    b = printf("%.*s\n", 6, "zhi");
    printf("%d\n", a);
    return 0;
}

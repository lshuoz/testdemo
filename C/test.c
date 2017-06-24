#include <stdio.h>
/*
 * Some questions in the interview of tecent and ZTE
 */

int main(int argc, char **argv)
{
    //Tencent interview
    struct _stTest{
        int i;
        char ch;
        short s;
        char ch1;
    }stTest;
    int a = 0x12345678;
    char *pc = (char*)&a;
    short *ps = (short*)&a;

    a = -20;
    unsigned int b = 10;

    printf("%d\n",sizeof(stTest));
    printf("0x%x, 0x%x, 0x%x\n",(int)pc[0],(int)pc[1],(int)pc[2]);
    printf("0x%x, 0x%x, 0x%x\n",(int)ps[0],(int)ps[1],(int)ps[2]);
    (a+b>6)?printf("1\n"):printf("0\n");

    //ZTE interview
    printf("%8.4s\n","hello world");
}

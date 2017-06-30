#include <stdio.h>

/*
 * Some questions in the interview of tecent and ZTE
 * 未初始化的static/global变量存储在程序的.bss段，初始化的存储在.data段
 * .bss段不占用可执行文件的空间，是在程序装载时分配空间，减少可执行文件大小，避免不必要的开销
 */

int main(int argc, char **argv)
{
    //Tencent interview
    {
        struct _stTest{
            int i;
            char ch;
            short s;
            char ch1;
        }stTest;
        printf("%d\n",(int)sizeof(stTest));
    }

    {
        int a = 0x12345678;
        char *pc = (char*)&a;
        short *ps = (short*)&a;
        printf("0x%x, 0x%x, 0x%x\n",(int)pc[0],(int)pc[1],(int)pc[2]);
        printf("0x%x, 0x%x, 0x%x\n",(int)ps[0],(int)ps[1],(int)ps[2]);
    }

    {
        int a = -20;
        unsigned int b = 10;
        (a+b>6)?printf("1\n"):printf("0\n");
    }
    {
        int a = 0x80000000;
        printf("%d\n",a);
        a >>= 1;
        printf("0x%08x\n",a);
    }

    //ZTE interview
    printf("%8.4s\n","hello world");
}

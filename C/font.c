/*
 * =====================================================================================
 *
 *       Filename:  font.c
 *
 *    Description:  用于测试后台返回的数据对应的字符
 *
 *        Version:  1.0
 *        Created:  2016年05月18日 16时38分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lshuoz (), lshuoz.scu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include<stdio.h>

int main(int argc, char**argv)
{
    char string[] = {0xbd, 0xbb, 0xd2, 0xd7,0xb3,0xc9,0xb9,0xa6};
    char string2[] = {0x31,0x30,0xd4,0xaa,0xc2,0xfa,0xb5,0xd6,0xc8,0xaf,0xa3,0xa8,0x35,0x30,0x2d,0x2d,0x31,0x30,0x30,0x20};
    printf("%s\n",string);
    printf("%s\n",string2);
    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  strsep.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2016年03月18日 11时09分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lshuoz (), lshuoz.scu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]){
    char string[] = "hello";
    char* p = string;
    char* key;
    int i = 0;

    while(p){
        i++;
        key = strsep(&p,"l");
        if(*key != 0)
            printf("i:%d   %s\n",i,key);
    }
    printf("%s\n",string);
    return 0;
}

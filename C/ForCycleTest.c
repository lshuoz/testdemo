/*
 * =====================================================================================
 *
 *       Filename:  ForCycleTest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年02月17日 18时49分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lshuoz (), lshuoz.scu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include<stdio.h>

int main(int argc, char* argv[]){
    int i;
    for(i = 0; i < 5; ++i){
        printf("%d ", i);
        if(i == 3){
            break;
        }
    }
    printf("\n%d\n", i);
    return 0;
}

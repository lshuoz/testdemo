/*
 * =====================================================================================
 *
 *       Filename:  print.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年04月15日 17时01分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lshuoz (), lshuoz.scu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<stdlib.h>
#include <stdio.h>
extern const unsigned short PiccBitmap[];
int main()
{
    FILE * fp;
    int i = 0, j = 0, index = 0;
    fp = fopen("logo.c", "wr+");

    for(j = 0; j < 162; ++j)
    {
        for(i = 0; i < 240; ++i)
        {
            if( (i < 2) || (i > 237) || (j < 2) || (j > 159))
            {
                fprintf(fp, "0XFFFF, ");
            }
            else
                fprintf(fp, "0X%04x, ", PiccBitmap[j*240+i+2]);
            ++index;
            if(index == 8)
            {
                fprintf(fp, "\r\n");
                index = 0;
            }
        }
    }

    return 0;
}


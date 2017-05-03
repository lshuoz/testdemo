/*
 * =====================================================================================
 *
 *       Filename:  chcmp.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2016年03月30日 10时36分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lshuoz (), lshuoz.scu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


int main(){
    unsigned char string[] = "\xc9\xcc\xbb\xa7\xba\xc5";
    if(strcmp(string, "商户号"))
        printf("匹配失败\n");
    else
        printf("匹配成功\n");
    printf("%s\n", string);
    return 0;
}

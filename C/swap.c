#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(x, y)\
    x = (x)^(y),\
    y = (x)^(y),\
    x = (x)^(y)
int main(int argc, char **argv){
    int a = 6;
    int b = 6;
    SWAP(a, a);
    printf("%d, %d\n", a, b);
    return 0;
}

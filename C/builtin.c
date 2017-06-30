#include<stdio.h>

int main(int argc, char** argv)
{
    int a = 12, b=10;
    printf("0 Num Before:%d\n",__builtin_clz(a));
    printf("0 Num After:%d\n",__builtin_ctz(a));
    printf("1 Num :%d\n",__builtin_popcount(a));
    if(__builtin_expect(a>b, 1))
    {
        printf("a>b\n");
    }

}

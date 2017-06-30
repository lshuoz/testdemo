#include <stdio.h>
#define SUM(a,b)\
({\
    int c = (a) + (b);\
    c;\
})
int main(int argc, char** argv)
{
    int a=2, b=3;
    printf("%d\n", SUM(a,b));
}

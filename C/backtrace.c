#include <stdio.h>
#include <execinfo.h>
#include <stdlib.h>
void backTrace(){
    char *buf[10];
    int size;
    char **strings;
    int i;
    size = backtrace(buf, 10);
    strings = backtrace_symbols(buf, size);
    if(NULL == strings){
        perror("backtrace_symbols");
        exit(-1);
    }
    printf("Obtained %d stack frames.\n", size);

    for(i = 0; i < size; ++i){
        printf("%s\n", strings[i]);
    }
}

void func2(){
    backTrace();
    return ;
}

void func1(){
    int a = 2;
    while(a){
        --a;
    }
    func2();
    return ;
}
int main(int argc, char **argv){
    func1();
    return 0;
}

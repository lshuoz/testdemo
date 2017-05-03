#include <time.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    time_t time1, time2;
    time1 = time(NULL);
    sleep(10);
    time2 = time(time2);
    printf("time1: %ld\ntime2: %ld\n", time1, time2);
    double diff = 0.0;
    diff = difftime(time1, time2);
    printf("%lf\n", diff);
    diff = difftime(time2, time1);
    printf("%lf\n", diff);

    return 0;
}

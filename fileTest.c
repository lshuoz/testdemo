#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int font_width = 0, font_height = 0;



int main(int argc, char** argv){
    char fileName[8];
    char buf[128];
    //FILE *fd;
    int fd;
    int i = 0;
    while(i < 100){
        sprintf(fileName, "file_%d", i);
        //fd = fopen(fileName, "w");
        fd = open(fileName, O_WRONLY|O_CREAT, 0777);
        if (NULL == fd){
            printf("%s open fail\n", fileName);
        }
        else{
            printf("writing file %s\n", fileName);
            sprintf(buf, "%s:hello world", fileName);
            //fprintf(fd, "%s", buf);
            write(fd, buf, strlen(buf));
            close(fd);
            memset(buf, 0, sizeof(buf));
            open(fileName, O_RDONLY);
            //fscanf(fd, "%s", &buf);
            read(fd, buf, sizeof(buf));
            printf("read file %s\n", fileName);
            printf("%s\n", buf);
            close(fd);
        }
        sleep(3);
        ++i;
    }
    return 0;
}

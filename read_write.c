#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define FILESIZE 10240
#define FILENAME "testfile.dat"

int font_width = 0, font_height = 0;

int main(int argc, char** argv){
    char readBuf[FILESIZE+1], writeBuf[FILESIZE+1];
    char data;
    int fd;
    int flag = 1;
    int i = 0;
    while(flag&& i< 5){
        memset(writeBuf, 0, sizeof(writeBuf));
        data = 'a' + i%26;
        memset(writeBuf, data, FILESIZE);
        fd = open(FILENAME, O_WRONLY|O_CREAT, 0777);
        if (-1 == fd){
            printf("%d open fail\n", i);
        }
        else{
            printf("%d writing file \n", i);
            lseek(fd, 0, SEEK_END);
            write(fd, writeBuf, strlen(writeBuf));
            close(fd);
            memset(readBuf, 0, sizeof(readBuf));
            fd = open(FILENAME, O_RDONLY);
            lseek(fd, -FILESIZE, SEEK_END);
            read(fd, readBuf, sizeof(readBuf));
            close(fd);
            if(strncmp(readBuf, writeBuf, FILESIZE))
                flag = 0;
        }
        sleep(3);
        ++i;
    }
    fd = open("fileWrite", O_CREAT|O_WRONLY, 0777);
    write(fd, writeBuf, FILESIZE);
    close(fd);
    fd = open("fileRead", O_CREAT|O_WRONLY, 0777);
    write(fd, readBuf, FILESIZE);
    close(fd);

    return 0;
}

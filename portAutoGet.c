#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>


int main(int argc, char* argv[]){
    int server_sock = -1;
    int client_sock = -1;
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if(-1 == server_sock){
        perror("socket");
        exit(-1);
    }

    u_short port = 0;
    struct sockaddr_in name;
    memset(&name, 0, sizeof(name));
    name.sin_family = AF_INET;
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    name.sin_port = htons(port);
    client_sock = bind(server_sock, (struct sockaddr*) &name, sizeof(name));
    if(-1 == client_sock){
        perror("bind");
    }
    int namelen = sizeof(name);
    getsockname(server_sock, (struct sockaddr*) &name, &namelen);
    printf("%d\n", name.sin_port);
    return 0;
}

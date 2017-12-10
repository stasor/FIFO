#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(){
    int BUF_SIZE=1024;
    int fd;
    char* fifo = "/fifo";
    char buf[BUF_SIZE];
    
    fd = open(fifo, O_RDONLY);
    read(fd, buf, BUF_SIZE);
    printf("Received: %s\n", buf);
    close(fd);

    return 0;
}

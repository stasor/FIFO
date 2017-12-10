#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int fd;
    char* fifo = "/fifo";

    mkfifo(fifo, 0);

    fd = open(fifo, O_WRONLY);
    write(fd, "Test", sizeof("Test"));
    close(fd);

    unlink(fifo);

    return 0;
}

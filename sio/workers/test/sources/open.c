#include <fcntl.h>

int main() {
    int ch[2];
    int fd = open("./somefile", O_RDONLY);
    return read(fd, ch, 2) != 2;
}

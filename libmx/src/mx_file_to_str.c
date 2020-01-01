#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    char *str;
    char buf;
    int size;
    int fd = open(file, O_RDONLY);
    
    if (fd < 0)
        return NULL;
    for (size = 0; read(fd, &buf, 1) > 0; size++) {}
    if (size < 0) {
        close(fd);
        return NULL;
    }
    str = mx_strnew(size);
    lseek(fd, -size, SEEK_END);
    read(fd, str, size);
    str[size] = '\0';
    close(fd);
    return str;
}


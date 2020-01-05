#include "libmx.h"

char *mx_file_to_str(const char *file) {
    char buf[1024];
    char *str;
    char *tmp;
    int size;
    int fd = open(file, O_RDONLY);

    if (fd < 0)
        return NULL;
    while ((size = read(fd, buf, sizeof(buf) - 1)) > 0) {
        buf[size] = '\0';
        tmp = str;
        str = mx_strjoin(str, buf);
        free(tmp);
    }
    close(fd);
    return str;
}


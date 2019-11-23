#include "../inc/libmx.h"

char *mx_file_to_str(const char *file)
{
    int size = 0;
    int fd = open(file, O_RDONLY);
    char buf;

    if (fd < 0)
        return NULL;

    while(read(fd, &buf, 1) > 0)
        size++;
        
    if (size < 0)
        return NULL;

    char *str = mx_strnew(size);

    lseek(fd, -size, SEEK_END);
    read(fd, str, size);
    str[size] = '\0';
    close(fd);

    return str;
}
/*
int main(int argc, char **argv)
{
    if(argc > 1)
        printf("%s", mx_file_to_str(argv[1]));

    return 0;
}
*/

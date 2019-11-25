#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
    if (fd < 0 || buf_size < 0)
        return -2;

    int index = -1;
    char buf[buf_size + 1];
    size_t read_bytes;
    char *str = NULL;

    while ((read_bytes = read(fd, buf, buf_size)) >= 0)
    {
        buf[read_bytes] = '\0';
        str = mx_strjoin(str, buf);
        printf("str %s\n", str);
        index = mx_get_char_index(str, delim);

        if (index != -1)
        {
            *lineptr = mx_strndup(str, index);
            break;
        }
    }

    if (read_bytes < 0)
        return -2;

    return index;
}

int main()
{
    int fd = open("fragment", O_RDONLY);
    char *str = NULL;
    int res = mx_read_line(&str, 20, 'f', fd); //res = 25, str = "The hotel was abandoned a" // works
    printf("res1 - %d\n", res);
    printf("str1 - %s\n", str);
    res = mx_read_line(&str, 35, 't', fd); //res = 0, str = "" // not works
    printf("res2 - %d\n", res);
    printf("str2 - %s\n", str);
    res = mx_read_line(&str, 4, '.', fd); //res = 163, // not works
    printf("res3 - %d\n", res);
    printf("str3 - %s\n", str);

    close(fd);

    return 0;
}

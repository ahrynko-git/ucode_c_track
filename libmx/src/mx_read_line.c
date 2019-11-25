#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd)
{
    if (fd < 0 || buf_size < 0)
        return -2;

    static char *save_remainded_str = NULL;
    char buf[buf_size + 1];
    char *str = NULL;
    int index = -1;
    size_t read_bytes;

    if (save_remainded_str)
        str = mx_strdup(save_remainded_str);

    while ((read_bytes = read(fd, buf, buf_size)) > 0)
    {
        buf[read_bytes] = '\0';
        str = mx_strjoin(str, buf);
        index = mx_get_char_index(str, delim);

        if (index != -1)
        {
            str[index] = '\0';
            save_remainded_str = mx_strdup(str + index + 1);

            break;
        }
        
        if (read_bytes == 0)
        {
            if (save_remainded_str)
                mx_strdel(&save_remainded_str);
            
            break;
        }
    }

    if (read_bytes < 0)
        return -2;

    *lineptr = mx_strdup(str);
    mx_strdel(&str);

    return mx_strlen(*lineptr);
}

int main()
{
    int fd = open("fragment", O_RDONLY);
    char *str = NULL;
    int res = mx_read_line(&str, 20, 'f', fd); //res = 25, str = "The hotel was abandoned a" // works
    printf("res1 - %d\n", res);
    printf("str1 - %s\n", str);
    res = mx_read_line(&str, 35, 't', fd); //res = 0, str = "" // works
    printf("res2 - %d\n", res);
    printf("str2 - %s\n", str);
    res = mx_read_line(&str, 4, '.', fd); //res = 163, // works
    printf("res3 - %d\n", res);
    printf("str3 - %s\n", str);

    close(fd);

    return 0;
}

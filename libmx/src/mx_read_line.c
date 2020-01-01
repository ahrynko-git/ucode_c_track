#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    static char *save_remainded_str = NULL;
    char buf[buf_size + 1];
    char *str = NULL;
    int index = -1;
    size_t read_bytes;
    
    if (fd < 0 || buf_size < 0)
        return -2;
    if (save_remainded_str)
        str = mx_strdup(save_remainded_str);
    while ((read_bytes = read(fd, buf, buf_size)) > 0) {
        buf[read_bytes] = '\0';
        str = mx_strjoin(str, buf);
        index = mx_get_char_index(str, delim);
        if (index != -1) {
            str[index] = '\0';
            save_remainded_str = mx_strdup(str + index + 1);
            break;
        }
        if (read_bytes == 0) {
            if (save_remainded_str)
                mx_strdel(&save_remainded_str);
            break;
        }
    }
    if (read_bytes <= 0)
        return -1;
    *lineptr = mx_strdup(str);
    mx_strdel(&str);
    return mx_strlen(*lineptr);
}

#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *res = mx_strnew(mx_strlen(str));
    
    if (!str)
        return NULL;
    for (int i = 0, j = 0; str[i]; i++) {
        if (!mx_isspace(str[i]))
            res[j++] = str[i];
        else if (!mx_isspace(str[i + 1]))
            res[j++] = ' ';
    }
    return mx_strtrim(res);
}

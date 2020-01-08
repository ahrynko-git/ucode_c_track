#include "libmx.h"

char *mx_del_extra_spaces(const char *str) {
    char *res;
    char *s = mx_strnew(mx_strlen(str));

    if (!str)
        return NULL;
    for (int i = 0, j= 0; str[i]; s[j++] = str[i++]) {
        if (mx_isspace(str[i])) {
            for (; mx_isspace(str[i]); i++);
            s[j++] = ' ';
        }
    }
    res = mx_strtrim(s);
    free(s);
    return res;
}

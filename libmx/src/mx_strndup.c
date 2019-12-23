#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int size = n;
    char *res;

    if (mx_strlen(s1) > size)
        size = mx_strlen(s1);
    res = mx_strnew(size);
    return mx_strncpy(res, s1, size);
}


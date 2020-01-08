#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    int size = n;

    if (size > mx_strlen(s1) || size <= 0)
        size = mx_strlen(s1);
    return mx_strncpy(mx_strnew(size), s1, size);
}

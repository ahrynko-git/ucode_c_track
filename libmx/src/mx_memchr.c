#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    const char *p_s = s;

    for (; n; n--, p_s++) {
        if (*p_s == c)
            return (char *)p_s;
    }
    return NULL;
}

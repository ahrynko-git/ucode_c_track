#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    const char *p_s = s;

    for (int len = mx_strlen(p_s); len && n; len--, n--) {
        if (p_s[len] == c)
            return (char*)p_s + len;
    }
    return NULL;
}

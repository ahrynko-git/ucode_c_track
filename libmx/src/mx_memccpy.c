#include "../inc/libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    const char *p_src = src;
    char *p_dst = dst;

    for (; n; n--, p_dst++, p_src++) {
        if (*p_src == c) {
            *p_dst++ = *p_src++;
            return dst;
        }
        *p_dst = *p_src;
    }
    return dst;
}

#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    unsigned const char *p_src = src;
    unsigned char *p_dst = dst;

    for (size_t i = 0; i < n; i++, p_dst++, p_src++)
        *p_dst = *p_src;
    return dst;
}

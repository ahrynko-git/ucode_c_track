#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    const char *p_src = src;
    char *p_dst = dst;

    for (size_t i = 0; i < n && p_src[i] != c; i++) {
        p_dst[i] = p_src[i];
        if (p_src[i] == c) {
            p_dst[i] = p_src[i];
            return &p_dst[i + 1];
        }
    }
    return NULL;
}

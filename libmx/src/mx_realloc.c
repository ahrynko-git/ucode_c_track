#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (!ptr && size)
        return malloc(size);
    if (size == 0 && ptr) {
        free(ptr);
        return NULL;
    }
    void *res;
    size_t len = mx_strlen(ptr);

    res = malloc(len > size ? len : size);
    if (!res)
        return NULL;
    return mx_memmove(res, ptr, size);
}

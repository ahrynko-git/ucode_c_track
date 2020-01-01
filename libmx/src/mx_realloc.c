#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *res;
    size_t len = mx_strlen(ptr);

    if (!ptr && size)
        return malloc(size);
    if (size == 0 && ptr) {
        free(ptr);
        return NULL;
    }
    res = malloc(len > size ? len : size);
    if (!res)
        return NULL;
    return mx_memmove(res, ptr, size);
}

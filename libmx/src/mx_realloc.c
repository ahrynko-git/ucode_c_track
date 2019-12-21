#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size){
    if (size == 0 && ptr){
        free(ptr);
        return NULL;
    }
    if (ptr == NULL && size)
        ptr = malloc(size);
    void *res;
    size_t len = mx_strlen(ptr);
    if (len > size)
        res = malloc(len);
    else 
        res = malloc(size);
    return mx_memmove(res, ptr, size);
}
/*
int main(){
    printf("%s\n", mx_realloc("hello", 0));
    return 0;
}
*/

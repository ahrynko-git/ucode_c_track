#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len){
    char *tmp = malloc(len);
    mx_memcpy(tmp, src, len);
    mx_memcpy(dst, tmp, len);
    return dst;
}
/*
int main(){
    int len = 5;
    char src[] = "Hello";
    char *dst = mx_strnew(len);
    printf("%s\n", mx_memmove(dst, src, len));
}
*/

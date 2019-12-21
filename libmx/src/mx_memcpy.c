#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
    unsigned const char *p_src = src;
    unsigned char *p_dst = dst;
    for(size_t i = 0; i < n; i++)
        *p_dst++ = *p_src++;
    return dst;
}
/*
int main()
{
    char src[] = "Hello";
    char dst[] = "world!";

    char src1[] = "Hello";
    char dst1[] = "world!";

    mx_memcpy(dst, src, 2);
    memcpy(dst1, src1, 2);

    printf("%s\n", dst);
    printf("%s\n", dst1);

    return 0;
}
*/

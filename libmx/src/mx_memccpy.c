// #include <stdio.h>
// #include <string.h>

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    const char *p_src = src;
    char *p_dst = dst;

    while(n--)
    {
        if (*p_src == c)
        {
            *p_dst++ = *p_src++;
            
            return dst;
        }
        *p_dst++ = *p_src++;
    }
        
    return dst;
}
/*
int main()
{
    char src[] = "Hello world";
    char dst[] = "aaaaaaaaaaa";

    char src1[] = "Hello world";
    char dst1[] = "aaaaaaaaaaa";

    mx_memccpy(dst, src, 108, 11);
    memccpy(dst1, src1, 108, 11);

    printf("%s\n", dst);
    printf("%s\n", dst1);

    return 0;
}
*/

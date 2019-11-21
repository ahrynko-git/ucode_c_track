#include <stdio.h>

char *mx_strcpy(char *dst, const char *src)
{    
    int i = 0;

    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return dst;
}
/*
int main()
{
    char *src = "Hello";
    char dst[5];

    printf("%s\n", src);
    mx_strcpy(dst, src);
    printf("%s\n", dst);

    return 0;
}
*/

// #include <stdio.h>

char *mx_strncpy(char *dst, const char *src, int len)
{
    int i = 0;

    while(src[i] && i < len)
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
    char dst[4];
    printf("%s\n", mx_strncpy(dst, "test", 5));
    return 0;
}
*/

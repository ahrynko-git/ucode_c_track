// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char *mx_strndup(const char *s1, size_t n)
{
    int size = n;

    if (mx_strlen(s1) > size)
        size = mx_strlen(s1);
    
    char *res = mx_strnew(size);

    return mx_strncpy(res, s1, n);
}
/*
int main()
{
    printf("%s\n", mx_strndup("test", 7));
    printf("%s\n", strndup("test", 7));
    return 0;
}
*/

// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *s1)
{
    char *res = mx_strnew(mx_strlen(s1));

    return mx_strcpy(res, s1);
}
/*
int main()
{
    printf("%s\n", mx_strdup("test"));
    return 0;
}
*/

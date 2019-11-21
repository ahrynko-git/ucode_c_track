// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *mx_strcpy(char *dst, const char *src);

void mx_strdel(char **str)
{
    if (str != NULL)
    {
        free(*str);
        *str = NULL;
    }
}
/*
int main()
{
    char *str = malloc(6 * sizeof(char));
    str = mx_strcpy(str, "hello");
    mx_strdel(&str);
    return 0;
}
*/

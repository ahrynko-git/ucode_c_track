// #include <stdio.h>
#include <string.h>

int mx_get_char_index(const char *str, char c)
{
    if (str == NULL)
        return -2;

    int i = 0;

    while(str[i])
    {
        if(str[i] == c)
            return i;
            
        i++;
    }

    return -1;
}
/*
int main()
{
    char str[] = "test";
    char c = 'f';
    printf("%d\n", mx_get_char_index(str, c));
    return 0;
}
*/

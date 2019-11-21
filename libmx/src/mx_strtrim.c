#include "../inc/libmx.h"

static int mx_is_space(char c)
{
    if(c == ' ' || (c >= '\t' && c <= '\r'))
        return 1;
    return 0;
}

char *mx_strtrim(const char *str)
{
    int i = 0;
    int str_len = mx_strlen(str);
    int j = str_len - 1;

    int space_before;
    int space_after;

    while(mx_is_space(str[i]))
        i++;

    space_before = i;
    
    while(mx_is_space(str[j]))
        j--;
    
    space_after = str_len - 1 - j;

    // char *res = malloc((str_len - (space_after + space_before) + 1) * sizeof(char));
    char *res = mx_strnew((str_len - (space_after + space_before) + 1));

    i = space_before;
    j = 0;

    while(i < (str_len - space_after))
    {
        res[j] = str[i];
        i++;
        j++;
    }

    res[j] = '\0';

    return res;
}
/*
int main()
{
    char *name = "\f My name... is Neo \t\n ";
    printf("%s\n", mx_strtrim(name)); // returns "My name... is Neo";

    return 0;
}
*/

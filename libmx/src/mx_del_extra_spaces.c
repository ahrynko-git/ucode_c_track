#include "../inc/libmx.h"

static int mx_is_space(char c)
{
    if(c == ' ' || (c >= '\t' && c <= '\r'))
        return 1;
    return 0;
}

char *mx_del_extra_spaces(const char *str)
{
    char *tmp = mx_strtrim(str);

    int i = 0;
    int j = 0;

    while(tmp[i])
    {
        if (mx_is_space(tmp[i]) == 0)
        {
            j++;
        }

        if (mx_is_space(tmp[i]) == 1)
        {
            j++;

            while(mx_is_space(tmp[i]) == 1)
                i++;

            i--;
        }

        i++;
    }

    char *res = mx_strnew(j + 1);

    i = 0;
    j = 0;

    while(tmp[i])
    {
        if(mx_is_space(tmp[i]) == 0)
        {
            res[j] = tmp[i];
        }
        if(mx_is_space(tmp[i]) == 1)
        {
            res[j] = tmp[i];

            while(mx_is_space(tmp[i]) == 1)
                i++;
            i--;
        }

        i++;
        j++;
    }

    res[j] = '\0';

    free(tmp);
    tmp = NULL;

    return res;
}

int main()
{
    char name[] = "\f My name... is \r Neo \t\n ";
    printf("%s\n", mx_del_extra_spaces(name)); //returns "My name... is Neo" // 17
}

#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace)
{
    if(str == NULL || sub == NULL || replace == NULL)
        return NULL;

    char *new_str = mx_strnew(mx_strlen(str) + mx_count_substr(str, sub) * (mx_strlen(replace) - mx_strlen(sub)));
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i])
    {
        j = 0;

        while(str[i + j] == sub[j] && str[i + j] != '\0')
                j++;

        if (sub[j] == '\0')
        {
            new_str = mx_strjoin(new_str, replace);
            i += mx_strlen(sub);
            k += mx_strlen(replace);
            continue;
        }
        new_str[k++] = str[i++];
    }
    new_str[k] = '\0';
    
    return mx_strdup(new_str);
}
/*
int main()
{
    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts")); //returns "McDonuts"
    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta")); //returns "Utata tuta"

    return 0;
}
*/

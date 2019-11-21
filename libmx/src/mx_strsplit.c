#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c)
{
    char **res = malloc((mx_count_words(s, c) + 1) * sizeof(char *));

    int i = 0;
    int j = 0;
    int n = 0;

    if (!s)
        return NULL;

    while (s[i])
    {
        if (s[i] != c)
        {
            while (s[i] != c && s[i])
            {
                i++;
                j++;
            }

            res[n] = malloc(j + 1);
            i -= j;
            j = 0;
            
            while (s[i] != c && s[i])
            {
                res[n][j] = s[i];
                i++;
                j++;
            }

            res[n][j] = '\0';
            j = 0;
            n++;
        }

        i++;
    }
    
    res[n] = NULL;

    return res;
}
/*
int main()
{
    // char *s = "**Good bye,**Mr.*Anderson.****";
    // mx_print_strarr(mx_strsplit(s, '*'), " "); // arr = ["Good bye,", "Mr.", "Anderson."]

    char *s = " Knock, knock, Neo. ";
    mx_print_strarr(mx_strsplit(s, ' '), " "); // arr = ["Knock,", "knock,", "Neo."]

    return 0;
}
*/

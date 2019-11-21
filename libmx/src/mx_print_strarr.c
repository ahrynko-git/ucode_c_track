#include <string.h>

void mx_printstr(const char *s);

void mx_print_strarr(char **arr, const char *delim)
{
    if (delim != NULL)
    {
        int i = 0;

        while(arr[i])
        {
            mx_printstr(arr[i]);
            if (arr[i + 1])
                mx_printstr(delim);
            i++;
        }
    }
}
/*
int main()
{
    char *arr[] = {"abc", "def", "ghj", NULL};
    char *delim = "0";
    // char *delim = NULL;
    mx_print_strarr(arr, delim);
    return 0;
}
*/

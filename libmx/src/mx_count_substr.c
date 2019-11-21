#include <string.h>
// #include <stdio.h>

int mx_count_substr(const char *str, const char *sub)
{
    if(str == NULL || sub == NULL)
        return -1;

    int i;
    int j = 0;
    int counter = 0;

    while(str[j])
    {
        i = 0;

        while(str[i + j] == sub[i])
        {
            if(sub[i + 1] != '\0')
                counter++;
            i++;
        }
        j++;
    }

    if(!counter)
        return -1;
        
    return counter;
}
/*
int main()
{
    char *str = "yo, yo, yo Neo";
    char *sub = "yo";

    printf("%d\n", mx_count_substr(str, sub)); //returns 3
    printf("%d\n", mx_count_substr(str, NULL)); //returns -1
    printf("%d\n", mx_count_substr(NULL, sub)); //returns -1

    return 0;
}
*/

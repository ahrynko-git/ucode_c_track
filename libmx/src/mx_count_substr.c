#include "../inc/libmx.h"

/*
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
*/

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    if (!str || !sub)
        return -1;
    int s = mx_strlen(sub);
    int len = mx_strlen(str) / s;
    
    for (int i = 0; i < len; i++) {
        if (mx_strstr(str, sub)) {
            count++;
            str = mx_strstr(str, sub) + s;
        }
    }
    return count;
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

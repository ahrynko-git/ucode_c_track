// #include <stdio.h>
#include <string.h>

int mx_count_words(const char *str, char c)
{
    if(str == NULL)
        return -1;

    int i = 0;
    int counter = 0;

    while(str[i] == c)
        i++;

    i++;

    while(str[i])
    {
        if (str[i] == c)
        {
            while(str[i] == c)
                i++;

            if(str[i] != '\0')
                counter++;

            i--;
        }   
        i++;
    }

    if(counter > 0)
        counter++;

    return counter;
}
/*
int main()
{
    char *str = " follow * the white rabbit ";

    printf("%d\n", mx_count_words(str, '*')); //returns 2
    printf("%d\n", mx_count_words(str, ' ')); //returns 5
    printf("%d\n", mx_count_words(NULL, ' ')); //returns -1

    return 0;
}
*/

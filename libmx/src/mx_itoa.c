// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_itoa(int number)
{
    int j = 0;
    int i = 0;
    char tmp[100];
    long int num1 = number;
    int minus = 0;

    if (number < 0)
    {
        minus = 1;
        num1 = -number;
    }

    while(num1 > 10)
    {
        tmp[i] = (num1 % 10) + 48;
        num1 /= 10;
        i++;
    }

    tmp[i] = num1 + 48;

    if (minus)
    {
        i++;
        tmp[i] = '-';
    }

    char *res = malloc((i + 2) * sizeof(char));

    if (res == NULL)
        return NULL;

    while(i >= 0)
    {
        res[j] = tmp[i];
        i--;
        j++;
    }

    res[j] = '\0';

    return res;
}
/*
int main()
{
    printf("%s\n", mx_itoa(-123));

    return 0;
}
*/

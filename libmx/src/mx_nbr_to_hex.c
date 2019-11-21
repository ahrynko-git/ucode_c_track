// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mx_nbr_to_hex(unsigned long nbr)
{
    char hex_to_dec[100];
    int i = 0;
    int tmp;

    while (nbr != 0)
    {
        tmp = nbr % 16;

        if (tmp < 10)
            hex_to_dec[i] = tmp + 48;
        else
            hex_to_dec[i] = tmp + 87;
        nbr /= 16;
        i++;
    }

    char *res = malloc((i + 1) * sizeof(char));

    if (res == NULL)
        return NULL;

    int j = 0;
    i--;

    while (i >= 0)
    {
        res[j] = hex_to_dec[i];
        i--;
        j++;
    }

    res[j] = '\0';

    return res;
}
/*
int main()
{
    printf("%s\n", mx_nbr_to_hex(52)); //returns "34"
    printf("%s\n", mx_nbr_to_hex(1000)); //returns "3e8"
    printf("%s\n", mx_nbr_to_hex(10)); //returns "a"
    return 0;
}
*/

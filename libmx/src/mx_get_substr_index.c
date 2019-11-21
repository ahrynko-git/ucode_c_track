// #include <stdio.h>

int mx_get_substr_index(const char *str, const char *sub)
{
    if(str == NULL || sub == NULL)
        return -2;

    int j;
    int i = 0;

    while(str[i])
    {
        j = 0;

        while(str[i + j] == sub[j])
            j++;

        if(!sub[j])
            return i;

        i++;
    }

    return -1;
}
/*
int main()
{
    printf("%d\n", mx_get_substr_index("McDonalds", "Don"));
    printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
    printf("%d\n", mx_get_substr_index("McDonalds", "Donatello")); //returns -1
    printf("%d\n", mx_get_substr_index("McDonalds", NULL)); //returns -2
    printf("%d\n", mx_get_substr_index(NULL, "Don")); //returns -2

    return 0;
}
*/

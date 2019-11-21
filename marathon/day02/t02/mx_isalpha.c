#include <stdbool.h>
// #include <stdio.h>

bool mx_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    return false;
}
/*
int main()
{
    printf("is_alpha %d\n", mx_isalpha('5'));
    return 0;
}
*/

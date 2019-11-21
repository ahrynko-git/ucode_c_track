#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n)
{
    int min_int_flag = 0;

    if (n == -2147483648)
    {
        n++;
        min_int_flag++;
    } 
    if (n < 0)
    {
        mx_printchar('-');
        n *= -1;
    }
    
    if (n > 10)
        mx_printint(n / 10);

    if (min_int_flag--)
        mx_printchar(n % 10 + 1 + '0');
    else
        mx_printchar(n % 10 + '0');
}
/*
int main()
{
    mx_printint(-2147483648);
    // mx_printint(2147483647);
    return 0;
}
*/

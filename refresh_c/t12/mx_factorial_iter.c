// #include <stdio.h>

int mx_factorial_iter(int n)
{
    if (n < 0 || n > 12)
        return 0;

    int res = 1;

    for(int i = 1; i <= n; i++)
        res *= i;

    return res;
}
/*
int main()
{
    printf("%d\n", mx_factorial_iter(-1));
    printf("%d\n", mx_factorial_iter(0));
    printf("%d\n", mx_factorial_iter(1));
    printf("%d\n", mx_factorial_iter(2));
    printf("%d\n", mx_factorial_iter(3));
    printf("%d\n", mx_factorial_iter(5));
    printf("%d\n", mx_factorial_iter(12));
    printf("%d\n", mx_factorial_iter(13));
    return 0;
}
*/

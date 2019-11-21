// #include <stdio.h>

int mx_factorial_iter(int n){
    
    if (n < 1 || n == 2147483647)
        return 0;

    int res = 1;

    for(int i = 2; i <= n; i++)
        res *= i;

    return res;
}
/*
int main(){
    printf("%d\n", mx_factorial_iter(2));
    printf("%d\n", mx_factorial_iter(5));
    printf("%d\n", mx_factorial_iter(2147483647));
    return 0;
}
*/

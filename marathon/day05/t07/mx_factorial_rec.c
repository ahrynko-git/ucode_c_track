// #include <stdio.h>

int mx_factorial_rec(int n){
    if (n < 1 || n == 2147483647)
        return 0;
    if (n == 1)
       return n;
   return n * mx_factorial_rec(n - 1);
}
/*
int main(){
    printf("%d\n", mx_factorial_rec(2));
    printf("%d\n", mx_factorial_rec(5));
    return 0;
}
*/

// #include <stdio.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b){
    if (!mx_gcd(a, b) || a == 0 || b == 0)
        return 0;
    return (a > 0 ? a : -a) / mx_gcd(a, b) * (b > 0 ? b : -b);
}
/*
int main(){
    printf("%d\n", mx_lcm(-20, 15));
    return 0;
}
*/

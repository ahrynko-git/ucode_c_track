#include <stdbool.h>
// #include <stdio.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n){
    if (n > 0 && mx_is_prime(n)){ 
        for (int pow = 2; pow < n; pow++){
            if (mx_is_prime(pow) && (mx_pow(2, pow) - 1) == n)
                return true;
        }
    }
    return false;
}
/*
int main(){
    printf("1 true %d\n", mx_is_mersenne(1));
    printf("11 false %d\n", mx_is_mersenne(11));
    printf("3 true %d\n", mx_is_mersenne(3));
    printf("4 false %d\n", mx_is_mersenne(4));
    printf("5 false %d\n", mx_is_mersenne(5));
    printf("6 false %d\n", mx_is_mersenne(6));
    printf("30 false %d\n", mx_is_mersenne(30));
    printf("31 true %d\n", mx_is_mersenne(31));
    printf("32 flase %d\n", mx_is_mersenne(32));
    printf("62 false %d\n", mx_is_mersenne(62));
    printf("63 true %d\n", mx_is_mersenne(63));
    printf("127 true %d\n", mx_is_mersenne(127));
    printf("255 true %d\n", mx_is_mersenne(255));
    printf("511 true %d\n", mx_is_mersenne(511));
    printf("1023 true %d\n", mx_is_mersenne(1023));
    return 0;
}
*/

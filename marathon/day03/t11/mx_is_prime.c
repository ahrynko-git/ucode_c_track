#include <stdbool.h>
// #include <stdio.h>
// #include <time.h>

bool mx_is_prime(int num){

    // time_t seconds;

    // seconds = time(NULL);

    if (num < 2)
        return false;

    for (int i = 2; i < num; i++){
        if (num % i == 0)
            return false;
    }
    return true;
}
/*
int main(){
    // printf("%d\n", mx_is_prime(1));
    // printf("%d\n", mx_is_prime(2));
    // printf("%d\n", mx_is_prime(3));
    // printf("%d\n", mx_is_prime(4));
    // printf("%d\n", mx_is_prime(5));
    printf("%d\n", mx_is_prime(2147483647));
    return 0;
}
*/

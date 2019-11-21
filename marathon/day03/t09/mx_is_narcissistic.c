#include <stdbool.h>
// #include <stdio.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num){
    
    int n = num;
    int pow = 0;
    int sum = 0;

    if (num >= 0){

        while(n){
            n /= 10;
            pow++;
        }
        
        n = num;

        while(n){
            sum += mx_pow(n % 10, pow);
            n /= 10;
        }

        if (sum == num)
            return true;
    }
    return false;
}
/*
int main(){
    printf("%d\n", mx_is_narcissistic(152));
    return 0;
}
*/

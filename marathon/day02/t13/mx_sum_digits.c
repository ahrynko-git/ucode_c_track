// #include <stdio.h>

int mx_sum_digits(int num){
    if (num < 0)
        num *= -1;

    int sum = 0;

    while(num >= 10){
        sum += num % 10;
        num /= 10;
    }
    return sum + num;
}
/*
int main(){
    printf("%d\n", mx_sum_digits(435)); //12
    printf("%d\n", mx_sum_digits(-555)); //15
    return 0;
}
*/

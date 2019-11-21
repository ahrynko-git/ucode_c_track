// #include <stdio.h>
// #include <stdlib.h>

#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str){
    int i = 0;
    int sign = 1;
    int num = 0;

    while(mx_isspace(str[i])){
        i++;
    }
    if (str[i] == '+' || str[i] == '-'){
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while(mx_isdigit(str[i])){
        num = num * 10 + str[i] - '0';
        i++;
    }
    return num * sign;
}
/*
int main(){
    printf("%d\n", mx_atoi(" 123 "));
    printf("%d\n", atoi(" 123 "));
    return 0;
}
*/

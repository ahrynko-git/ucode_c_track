#include <stdbool.h>
// #include <stdio.h>

bool mx_multiple_number(int n, int mult){
    if (mult % n)
        return false;
    return true;
}
/*
int main(){
    printf("%d\n", mx_multiple_number(3, 9));
    return 0;
}
*/

#include <stdbool.h>
// #include <stdio.h>

bool mx_isupper(int c) {
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}
/*
int main(){
    printf("isupper - %d\n", mx_isupper('Z'));
    return 0;
}
*/

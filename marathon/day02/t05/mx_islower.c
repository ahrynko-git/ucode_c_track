#include <stdbool.h>
// #include <stdio.h>

bool mx_islower(int c) {
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}
/*
int main() {
    printf("is_lower - %d\n", mx_islower('a'));
    return 0;
}
*/

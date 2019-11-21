// #include <stdio.h>

int mx_toupper(int c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
/*
int main() {
    printf("%c\n", mx_toupper('Z'));
    printf("%c\n", mx_toupper('z'));
    return 0;
}
*/

// #include <stdio.h>

void mx_deref_pointer(char ******str) {
    *****str = "Follow the white rabbit!";
}
/*
int main() {
    char *p1;
    char **p2 = &p1;
    char ***p3 = &p2;
    char ****p4 = &p3;
    char *****p5 = &p4;
    char ******p6 = &p5;

    mx_deref_pointer(p6);

    printf("%s\n", *****p6);

    return 0;
}
*/

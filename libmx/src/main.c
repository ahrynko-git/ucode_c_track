#include "../inc/libmx.h"

// system("leaks -q libmx");

// int main() {
//     mx_printchar('c');
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     mx_print_unicode(128515);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     mx_printstr("Hello");
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *arr[] = {"abc", "def", "ghj", NULL};
//     char *delim = "0";
//     // char *delim = NULL;
//     mx_print_strarr(arr, delim);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     mx_printint(-2147483648);
//     printf("\n");
//     mx_printint(2147483647);
//     return 0;
// }

// int main()
// {
//     printf("%f\n", mx_pow(3, 3)); // returns 27
//     printf("%f\n", mx_pow(2.5, 3)); // returns 15.625
//     printf("%f\n", mx_pow(2, 0)); // returns 1
//     printf("%f\n", mx_pow(2, -2)); // returns ? infinite
//     printf("%f\n", mx_pow(0, 0)); // returns ?
//     return 0;
// }

// int main()
// {
//     printf("res %d\n", mx_sqrt(0)); // 0
//     printf("res %d\n", mx_sqrt(1)); // 1
//     printf("res %d\n", mx_sqrt(2)); // 0
//     printf("res %d\n", mx_sqrt(3)); // 0
//     printf("res %d\n", mx_sqrt(4)); // 2
//     printf("res %d\n", mx_sqrt(8)); // 0
//     printf("res %d\n", mx_sqrt(2147395600)); // 46340
//     printf("res %d\n", mx_sqrt(-2147483648)); // 0
//     printf("res %d\n", mx_sqrt(2147483647)); // 0
//     return 0;
// }

// int main()
// {
//     printf("%s\n", mx_nbr_to_hex(52)); //returns "34"
//     printf("%s\n", mx_nbr_to_hex(1000)); //returns "3e8"
//     printf("%s\n", mx_nbr_to_hex(10)); //returns "a"
//     return 0;
// }

// int main() {
//     printf("%lu\n", mx_hex_to_nbr("C4"));   //returns 196
//     printf("%lu\n", mx_hex_to_nbr("FADE"));     //returns 64222
//     printf("%lu\n", mx_hex_to_nbr("ffffffffffff"));     //returns 281474976710655
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_itoa(-123));
//     printf("%s\n", mx_itoa(123));
//     return 0;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint); //prints "12345" on the standart output
//     return 0;
// }

// int main() {
//     char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;
//     printf("%d ", mx_binary_search(arr, 6, "ab", &count));   //returns 3 and count = 3
//     printf("%d\n", count);
//     // count = 0;
//     printf("%d ", mx_binary_search(arr, 6, "aBc", &count));  //returns 2 and count = 1
//     printf("%d\n", count);
//     return 0;
// }

// int main() {
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n", mx_bubble_sort(arr, 4)); //3
//     return 0;
// }

// int main() {
//     char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     printf("%d\n", mx_quicksort(arr, 0, 3)); //returns 2
//     return 0;
// }

// int main() {
//     printf("len: %d\n", mx_strlen("Hello"));
//     return 0;
// }

// int main() {
//     char str[] = "ONE"; // works
//     // char *str = "ONE"; // not works
//     // printf("before %s\n", str);
//     mx_swap_char(&str[0], &str[1]); //'str' now is "NOE"
//     printf("after %s\n", str);
//     // mx_swap_char(&str[1], &str[2]); //'str' now is "NEO"
//     return 0;
// }

// int main() {
//     char str[] = "game over";
//     mx_str_reverse(str);
//     printf("%s\n", str);
// }

// int main() {
//     char *str = malloc(6 * sizeof(char));
//     str = mx_strcpy(str, "hello");
//     mx_strdel(&str);
//     printf("%s\n", str);
//     return 0;
// }

// int main() {
//     char *s0 = malloc(5);
//     char *s1 = malloc(6);
//     char *s2 = malloc(3);
//     char **ss = malloc(4 * sizeof(char *));
    
//     ss[0] = s0;
//     ss[1] = s1;
//     ss[2] = s2;
//     ss[3] = NULL;
//     mx_del_strarr(&ss);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char str[] = "test";
//     char c = 'e';

//     printf("%d\n", mx_get_char_index(str, c));
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_strdup("test"));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_strndup("test", 7));
//     printf("%s\n", strndup("test", 7));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *src = "Hello ";
//     char dst[6];

//     printf("%s\n", src);
//     mx_strcpy(dst, src);
//     printf("%s\n", dst);

//     return 0;
// }

// int main() {
//     char dst[4];
//     printf("%s\n", mx_strncpy(dst, "test", 5));
//     printf("%s\n", strncpy(dst, "test", 5));
//     return 0;
// }

// int main() {
//     char *s1 = "abc";
//     char *s2 = "abc";
//     printf("%d\n", mx_strcmp(s1, s2));
//     printf("%d\n", strcmp(s1, s2));
//     return 0;
// }

// int main() {
//     char *s2 = " world!";
//     char s1[] = "Hello";
//     printf("%s\n", mx_strcat(s1, s2));
//     printf("%s\n", s1);
//     return 0;
// }

int main() {
    char *needle = "Hello world!";
    char *haystack = " worl";
    printf("mx_strstr %s\n", mx_strstr(haystack, needle));
    printf("strstr %s\n", strstr(needle, haystack));
    printf("mx_strstr %s\n", mx_strstr("Ururu turu", "ru"));
    printf("strstr %s\n", strstr("Ururu turu", "ru"));
    return 0;
}
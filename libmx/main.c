#include "../inc/libmx.h"

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
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%f\n", mx_pow(3, 3)); // returns 27
//     printf("%f\n", mx_pow(2.5, 3)); // returns 15.625
//     printf("%f\n", mx_pow(2, 0)); // returns 1
//     printf("%f\n", mx_pow(2, -2)); // returns ? infinite
//     printf("%f\n", mx_pow(0, 0)); // returns ?
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("res %d\n", mx_sqrt(0)); // 0
//     printf("res %d\n", mx_sqrt(1)); // 1
//     printf("res %d\n", mx_sqrt(2)); // 0
//     printf("res %d\n", mx_sqrt(3)); // 0
//     printf("res %d\n", mx_sqrt(4)); // 2
//     printf("res %d\n", mx_sqrt(8)); // 0
//     printf("res %d\n", mx_sqrt(2147395600)); // 46340
//     printf("res %d\n", mx_sqrt(-2147483648)); // 0
//     printf("res %d\n", mx_sqrt(2147483647)); // 0
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_nbr_to_hex(52)); //returns "34"
//     printf("%s\n", mx_nbr_to_hex(1000)); //returns "3e8"
//     printf("%s\n", mx_nbr_to_hex(10)); //returns "a"
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%lu\n", mx_hex_to_nbr("C4"));   //returns 196
//     printf("%lu\n", mx_hex_to_nbr("FADE"));     //returns 64222
//     printf("%lu\n", mx_hex_to_nbr("ffffffffffff"));     //returns 281474976710655
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_itoa(-123));
//     printf("%s\n", mx_itoa(123));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     mx_foreach(arr, 5, mx_printint); //prints "12345" on the standart output
//     system("leaks -q a.out");
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
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n", mx_bubble_sort(arr, 4)); //3
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *arr[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//     printf("%d\n", mx_quicksort(arr, 0, 3)); //returns 2
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("len: %d\n", mx_strlen("Hello"));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char str[] = "ONE"; // works
//     // char *str = "ONE"; // not works
//     // printf("before %s\n", str);
//     mx_swap_char(&str[0], &str[1]); //'str' now is "NOE"
//     printf("after %s\n", str);
//     // mx_swap_char(&str[1], &str[2]); //'str' now is "NEO"
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char str[] = "game over";
//     mx_str_reverse(str);
//     printf("%s\n", str);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *str = malloc(6 * sizeof(char));
//     str = mx_strcpy(str, "hello");
//     mx_strdel(&str);
//     printf("%s\n", str);
//     system("leaks -q a.out");
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
//     system("leaks -q a.out");
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
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char dst[5];
//     printf("%s\n", mx_strncpy(dst, "test", 3));
//     printf("%s\n", strncpy(dst, "test", 3));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *s1 = "abc";
//     char *s2 = "adc";
//     printf("%d\n", mx_strcmp(s1, s2));
//     printf("%d\n", strcmp(s1, s2));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *s2 = " world!";
//     char s1[] = "Hello";

//     printf("%s\n", mx_strcat(s1, s2));
//     printf("%s\n", s1);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *needle = "Hello world!";
//     char *haystack = " worl";

//     printf("mx_strstr %s\n", mx_strstr(haystack, needle));
//     printf("strstr %s\n", strstr(needle, haystack));
//     printf("mx_strstr %s\n", mx_strstr("Ururu turu", "ru"));
//     printf("strstr %s\n", strstr("Ururu turu", "ru"));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *str = "yo, yo, yo Neo";
//     char *sub = "yo";

//     printf("%d\n", mx_count_substr(str, sub)); //returns 3
//     printf("%d\n", mx_count_substr(str, NULL)); //returns -1
//     printf("%d\n", mx_count_substr(NULL, sub)); //returns -1
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%d\n", mx_get_substr_index("McDonalds", "Don")); // return 2
//     printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
//     printf("%d\n", mx_get_substr_index("McDonalds", "Donatello")); //returns -1
//     printf("%d\n", mx_get_substr_index("McDonalds", NULL)); //returns -2
//     printf("%d\n", mx_get_substr_index(NULL, "Don")); //returns -2
//     return 0;
// }

// int main() {
//     char *str = " follow * the white rabbit ";

//     printf("%d\n", mx_count_words(str, '*')); //returns 2
//     printf("%d\n", mx_count_words(str, ' ')); //returns 5
//     printf("%d\n", mx_count_words(NULL, ' ')); //returns -1
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_strnew(10));
//     printf("%s\n", mx_strnew(0));
//     printf("%s\n", mx_strnew(-1));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *name = "\f My name... is Neo \t\n ";

//     printf("%s\n", mx_strtrim(name)); // returns "My name... is Neo";
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char name[] = "\f My name... is \r Neo \t\n ";
//     printf("%s\n", mx_del_extra_spaces(name)); //returns "My name... is Neo" // 17
//     system("leaks -q a.out");
// }

// int main() {
//     char *s = "**Good bye,**Mr.*Anderson.****";
//     mx_print_strarr(mx_strsplit(s, '*'), " "); // arr = ["Good bye,", "Mr.", "Anderson."]
//     char *s1 = " Knock, knock, Neo. ";
//     mx_print_strarr(mx_strsplit(s1, ' '), " "); // arr = ["Knock,", "knock,", "Neo."]
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char *str1 = "this";
//     char *str2 = "dodge ";
//     char *str3 = NULL;
//     printf("%s\n", mx_strjoin(str2, str1)); //returns "dodge this"
//     printf("%s\n", mx_strjoin(str1, str3)); //returns "this"
//     printf("%s\n", mx_strjoin(str3, str3)); //returns NULL
//     system("leaks -q a.out");
//     return 0;
// }

// int main(int argc, char **argv) {
//     if(argc > 1)
//         printf("%s", mx_file_to_str(argv[1]));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     int fd = open("fragment", O_RDONLY);
//     char *str = NULL;
//     int res = mx_read_line(&str, 20, 'f', fd); //res = 25, str = "The hotel was abandoned a" // works
//     printf("res1 - %d\n", res);
//     printf("str1 - %s\n", str);
//     res = mx_read_line(&str, 35, 't', fd); //res = 0, str = "" // works
//     printf("res2 - %d\n", res);
//     printf("str2 - %s\n", str);
//     res = mx_read_line(&str, 4, '.', fd); //res = 163, // works
//     printf("res3 - %d\n", res);
//     printf("str3 - %s\n", str);
//     close(fd);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts")); //returns "McDonuts"
//     printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta")); //returns "Utata tuta"
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char str[] = "Hello world!";
//     char str1[] = "Hello world!";
//     printf("before %s\n", str);
//     printf("before %s\n", str1);
//     memset(str, 48, 2);
//     mx_memset(str1, 48, 2);
//     printf("after %s\n", str);
//     printf("after %s\n", str1);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char src[] = "Hello";
//     char dst[] = "world!";
//     char src1[] = "Hello";
//     char dst1[] = "world!";
//     mx_memcpy(dst, src, 2);
//     memcpy(dst1, src1, 2);
//     printf("%s\n", dst);
//     printf("%s\n", dst1);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char src[] = "Hello world";
//     char dst[] = "aaaaaaaaaaa";
//     char src1[] = "Hello world";
//     char dst1[] = "aaaaaaaaaaa";

//     mx_memccpy(dst, src, 108, 11);
//     memccpy(dst1, src1, 108, 11);
//     printf("%s\n", dst);
//     printf("%s\n", dst1);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char s1[] = "aac";
//     char s2[] = "d";
//     char s11[] = "aac";
//     char s22[] = "d";
//     printf("%d\n", mx_memcmp(s1, s2, 4));
//     printf("%d\n", memcmp(s11, s22, 4));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     char str[] = "Hello";
//     char str1[] = "Hello";

//     printf("%s\n", mx_memchr(str, 0, 3));
//     printf("%s\n", memchr(str1, 0, 3));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_memrchr("Trinity", 'i', 7)); //returns "ity"
//     printf("%s\n", mx_memrchr("Trinity", 'M', 7)); //returns NULL
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_memmem("abcdef", 4, "cd", 2));
//     printf("%s\n", memmem("abcdef", 4, "cd", 2));
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     printf("%s\n", mx_realloc("hello", 0));
//     system("leaks -q a.out");
//     return 0;
// }

// LIST HELPER

// static void print_list(t_list **list) {
//     t_list *tmp = *list;
//     while(tmp != NULL){
//         printf("%s ", tmp->data);
//         tmp = tmp->next;
//     }
//     printf("\n");
// }

// int main() {
//     t_list *list = mx_create_node("1");
//     print_list(&list);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     t_list *node = mx_create_node("1");
//     mx_push_front(&node, "2");
//     print_list(&node);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     t_list *node = mx_create_node("1");
//     mx_push_back(&node, "2");
//     mx_push_back(&node, "3");
//     print_list(&node);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     t_list *list = mx_create_node("1");
//     mx_push_back(&list, "2");
//     mx_push_back(&list, "3");
//     print_list(&list);
//     mx_pop_front(&list);
//     print_list(&list);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     t_list *list = mx_create_node("1");
//     mx_push_back(&list, "2");
//     mx_push_back(&list, "3");
//     mx_push_back(&list, "4");
//     print_list(&list);
//     mx_pop_back(&list);
//     print_list(&list);
//     system("leaks -q a.out");
//     return 0;
// }

// int main() {
//     t_list *node = mx_create_node("1");
//     mx_push_back(&node, "2");
//     print_list(&node);
//     printf("size %d", mx_list_size(node));
//     system("leaks -q a.out");
//     return 0;
// }

// static int cmp(char *a, char *b) {
//     return mx_strcmp(a, b) ? 1 : 0;
// }

// int main() {
//     t_list *list = mx_create_node("3");
//     mx_push_back(&list, "2");
//     mx_push_back(&list, "1");
//     print_list(&list);
//     // int (*cmp)(void *, void *) = NULL;
//     mx_sort_list(list, &cmp);
//     print_list(&list);
//     return 0;
// }

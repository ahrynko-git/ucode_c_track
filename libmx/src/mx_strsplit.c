#include "../inc/libmx.h"

static void print_arr(char **arr)
{
    int i = 0;

    while(arr[i])
        printf("%s\n", arr[i]);
}

char **mx_strsplit(const char *s, char c)
{
    printf("test %s\n", s);
    printf("test %c", c);

    char *arr[] = {"test", "test1"};

    return *arr;
}

int main()
{
    char *s = "**Good bye,**Mr.*Anderson.****";
    char *arr[] = mx_strsplit(s, '*'); // arr = ["Good bye,", "Mr.", "Anderson."]

    // s = " Knock, knock, Neo. ";
    // arr = mx_strsplit(s, ' '); // arr = ["Knock,", "knock,", "Neo."]

    return 0;
}

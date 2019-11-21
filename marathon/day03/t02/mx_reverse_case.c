#include <stdbool.h>

// #include <stdio.h>

bool mx_islower(int c);
bool mx_isupper(int c);
int mx_toupper(int c);
int mx_tolower(int c);

void mx_reverse_case(char *s){
	while(*s){
		if (mx_islower(*s))
			*s = mx_toupper(*s);
		else
			s = mx_tolower(*s);
		s++;
	}
}
/*
int main()
{
    char str[] = "HeLLO Neo!";
    mx_reverse_case(str);
    printf("%s\n", str);

    char *str1 = "HeLLO Neo!";
    mx_reverse_case(str1);
    printf("%s\n", str1);

    return 0;
}
*/

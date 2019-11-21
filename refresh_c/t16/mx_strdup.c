// #include <stdio.h>

char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *str)
{
	char *s = mx_strnew(mx_strlen(str));
	
	return mx_strcpy(s, str);
}
/*
int main()
{
	char *s = "Hello";

	printf("%s\n", s);
	printf("%s\n", mx_strdup(s));

	return 0;
}
*/

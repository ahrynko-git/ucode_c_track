// #include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size)
{
	char *s = (char*)malloc(size + 1);

	if (s == NULL)
		return NULL;

	for (int i = 0; i <= size; i++)
		s[i] = '\0';

	return s;
}
/*
int main()
{
	printf("%s\n", mx_strnew(10));
	printf("%s\n", mx_strnew(-1));
 
	return 0;
}
*/

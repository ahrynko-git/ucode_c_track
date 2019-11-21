#include <stdlib.h>
#include <stdio.h>

char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
	int size = 0;

	while(str[size])
		size++;

	char *res = mx_strnew(size);

	if (res == NULL)
		return NULL;

	for(int i = 0; i <= size; i++)
		res[i] = str[i];

	return res;
}

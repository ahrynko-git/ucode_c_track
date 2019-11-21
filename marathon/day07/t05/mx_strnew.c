#include <stdlib.h>
#include <unistd.h>

char *mx_strnew(const int size)
{

	if (size < 0)
		return NULL;

	char *ptr = malloc((1 * size) + 1);

	if (ptr == NULL)
		return NULL;

	for(int i = 0; i <= size; i++)
		ptr[i] = '\0';

	return ptr;
}

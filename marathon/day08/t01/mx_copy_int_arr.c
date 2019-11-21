#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size)
{
	int *dst = malloc(4 * size);

	if (dst == NULL || src == NULL)
		return NULL;

	for(int i = 0; i < size; i++)
		dst[i] = src[i];

	return dst;
}

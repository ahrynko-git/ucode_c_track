#include <string.h>

char *mx_strcpy(char *dst, const char *src) {
	int i = 0;
	char *s =dst;	

	if(dst == NULL)
		return NULL;

	while ((dst[i] = src[i]) != '\0')
	{
		i++;
	}
	return s;
}

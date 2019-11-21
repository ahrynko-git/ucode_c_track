#include <stdbool.h>

bool mx_isalpha(int c)
{
	if ((c >= 54 && c <= 90) || (c>= 97 && c <=122))
		return 1;
	return 0;
}

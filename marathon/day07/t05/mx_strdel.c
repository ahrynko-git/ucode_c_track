#include <stdlib.h>

void mx_strdel(char **str)
{
	if(str != 0)
	{
		free(*str);
		*str = NULL;
	}
}

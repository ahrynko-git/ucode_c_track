#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr)
{
	long tmp;
	int i = 0;
	int size;

	char *r;
	char hex[20];

	while(nbr)
	{
		tmp = nbr % 16;

		if (tmp < 10)
			hex[i] = tmp + 48;
		else
			hex[i] = tmp + 87;

		nbr /= 16;
		i++;
	}

	size = i--;
	r = mx_strnew(tmp);

	for(int j = 0; j <= size; j++)
	{
		r[j] = hex[i];
		i--;
	}

	return r;
}

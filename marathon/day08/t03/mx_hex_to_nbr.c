#include <unistd.h>
#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex)
{
	int i = 0;
	long res = 0;
	long val;

	int len = 0;

	while(hex[len])
		len++;

	len--;

	long pow;

	while(hex[i])
	{
		pow = 1;

		if(mx_isdigit(hex[i]))
		{
			val = hex[i] - 48;
		}
		else if (mx_islower(hex[i]))
		{
			val = hex[i] - 97 + 10;
		}
		else if (mx_isupper(hex[i]))
		{
			val = hex[i] - 65 + 10;
		}
		
		for(int i = 1; i <= len; i++)
			pow *= 16;

		res += val * pow;

		len--;
		i++;
	}

	return res;
}

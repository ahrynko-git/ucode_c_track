#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long sum = 0;

	for (int i = 0; hex[i]; i++) {
		if (hex[i] >= '0' && hex[i] <= '9')
			sum = sum * 16 + (hex[i] - 48);
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			sum = sum * 16 + (hex[i] - 'A' + 10);
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			sum = sum * 16 + (hex[i] - 'a' + 10);
		else
			return 0;
	}
	return sum;
}

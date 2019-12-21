#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = 1;
    if (n == 0 && pow <= 0)
        return 1;
   for (unsigned int i = 0; i < pow; i++)
    	res *= n;
   return res;
}

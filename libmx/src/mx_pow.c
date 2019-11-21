// #include <stdio.h>

double mx_pow(double n, unsigned int pow)
{
  if (n == 0 && pow == 0)
    return 1;

   double res = 1;

   for(unsigned int i = 0; i < pow; i++)
    	res *= n;

   return res;
}
/*
int main()
{
    // что-то с infinity (man pow)
    printf("%f\n", mx_pow(3, 3)); // returns 27
    printf("%f\n", mx_pow(2.5, 3)); // returns 15.625
    printf("%f\n", mx_pow(2, 0)); // returns 1
    printf("%f\n", mx_pow(2, -2)); // returns ? infinite
    printf("%f\n", mx_pow(0, 0)); // returns ?
    return 0;
}
*/

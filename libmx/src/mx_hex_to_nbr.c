// #include <stdio.h>

static long pow(int pow)
{
   long res = 1;

   for(int i = 0; i < pow; i++)
       res *= 16;

   return res;
}

unsigned long mx_hex_to_nbr(const char *hex)
{
	unsigned long sum = 0;
	int i = 0;

	int base = 0;

	while(hex[base])
		base++;

	base--;

	while(hex[i])
	{
		if (hex[i] >= '0' && hex[i] <= '9')
			sum += (hex[i] - 48) * pow(base);
		else if (hex[i] >= 'A' && hex[i] <= 'F')
			sum += (hex[i] - 55) * pow(base);
		else if (hex[i] >= 'a' && hex[i] <= 'f')
			sum += (hex[i] - 87) * pow(base);
		else
			return 0;

		i++;
		base--;
	}

	return sum;
}
/*
int main()
{
	printf("%lu\n", mx_hex_to_nbr("C4")); 			//returns 196
	printf("%lu\n", mx_hex_to_nbr("FADE")); 			//returns 64222
	printf("%lu\n", mx_hex_to_nbr("ffffffffffff")); 	//returns 281474976710655
 
	return 0;
}
*/

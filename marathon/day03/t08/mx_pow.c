// #include <stdio.h>

double mx_pow(double n, unsigned int pow) {
	double res = 1;	

	for (int i = 0; i < pow; i++)
		res *= n;
	return res;
}
/*
int main(){
    printf("%f\n", mx_pow(3, 3));
    printf("%f\n", mx_pow(2.5, 3));
    printf("%f\n", mx_pow(2, 0));
    return 0;
}
*/

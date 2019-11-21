#include "../inc/poker.h"

void mx_charint (char **a,int *b) {
	for (int i = 1 ; i < 6; i++) {
		if (a[i][0] == 'J') 
			b[i] = 11;
		else if (a[i][0] == 'Q')
			b[i] = 12;
		else if (a[i][0] == 'K')
			b[i] = 13;
		else if (a[i][0] == 'A')
			b[i] = 14;
		else if (a[i][0] == '1')
			b[i] = 10;
		else
			b[i] = a[i][0] - 48;
	}
	mx_sort(b);
}

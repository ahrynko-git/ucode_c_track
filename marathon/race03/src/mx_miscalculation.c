#include "../inc/poker.h"

int mx_miscalculation(char **a) {
	int d = 0;
	for (int i = 1; i < 6; i++) {
		if (mx_strlen(a[i]) == 2) 
			d = d + a[i][1];
		else
			d = d + a[i][2];
	}  
	if (mx_strlen(a[1]) == 2) {
		if (d / 5 ==  a[1][1])
			return 1;
		else if (d / 5 ==  a[1][2])
			return 1;
	}
	return 0;
}

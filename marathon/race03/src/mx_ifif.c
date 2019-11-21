#include "../inc/poker.h"

bool mx_ifsuits(char s) {
	if (s == 'H' || s == 'C' || s == 'S' || s == 'D') 
		return 1;
	else
		return 0;
}

bool mx_iffaces(char s) {
	if ((s > 49 && s < 58) || s == 'J' || s == 'Q' || s == 'K' || s == 'A') 
		return 1;
	else 
		return 0;
}

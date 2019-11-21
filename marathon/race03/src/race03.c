#include "../inc/poker.h"

int mx_growth(int *a) {
	int b=1;
	int c=1;

	while (c < 5){
		if (((a[c] +1 ) == a[c+1]) || (a[4] == 5 && a[5] == 14 )) 
			c++;
		else {
			b = 0;
			break;
		}
	}
	return b;
}

void mx_result (int *v, int *p, int *d, int *m, int j) {
	if (*m > 0 && *v > 0 && j > 0)  
		mx_printstr("Royal flush\n");
	else if (*m > 0 && *v > 0)
		mx_printstr("Straight flush\n");
	else if (*p == 4)
		mx_printstr("Four of a kind\n");
	else if (*p == 3 && *d == 2)
		mx_printstr("Full house\n");
	else if (*m > 0)
		mx_printstr("Flush\n");
	else if (*v > 0) 
		mx_printstr("Straight\n");
	else if (*p == 3)
		mx_printstr("Three of a kind\n");
	else if (*p == 2 && *d == 2) 
		mx_printstr("Two pair\n");
	else if (*p == 2) 
		mx_printstr("One pair\n");
	else
		mx_printstr("No pair\n");
}
int Tyz(int a) {
	if (a == 14)
		return 1;
	else
		return 0;
}


int main(int argc, char *argv[]) {
	int a = 1;
	int c, j, b, e, f;
	int d[6];
	if (argc == 6) {
		for (int i = 1; i < 6; i++) {
			if (a > 0){ 
				mx_invalidcard(argv[i],&a);
				if (a > 0)
					mx_duplicate(argv,i,&a);
			}
		}
		if (a > 0) {
			c = mx_miscalculation(argv);
			mx_charint(argv,d);
			j = Tyz(d[5]);
			e = mx_growth(d);
			b = mx_popular_int(d,6,&f);
			mx_result(&e,&b,&f,&c,j);
		}
		return 0;
	}
	else 
		mx_printerr("usage: ./race03 [card1] ");
		mx_printerr("[card2] [card3] [card4] [card5]\n");
}

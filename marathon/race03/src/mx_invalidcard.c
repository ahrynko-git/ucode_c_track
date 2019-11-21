#include "../inc/poker.h"

void mx_invalidcard(char *card,int *a) {
	if (mx_strlen(card) > 3 || mx_strlen(card) < 2) {
		mx_printerr("Invalid card: ");
		mx_printerr(card);
		mx_printerr("\n");
		*a=0;
	}
	if (mx_strlen(card) == 2) {
		if (mx_iffaces(card[0]) > 0 && mx_ifsuits(card[1]) < 1){
			mx_printerr("Invalid card suit: ");
			mx_printer(card[1]);
			mx_printerr("\n");
			*a=0;	
		}
		if (mx_iffaces(card[0]) < 1 && mx_ifsuits(card[1]) > 0){
            mx_printerr("Invalid card rank: ");
            mx_printer(card[0]);
	    mx_printerr("\n");
			*a=0;
        }
		if (mx_iffaces(card[0]) < 1 && mx_ifsuits(card[1]) < 1){
            mx_printerr("Invalid card: ");
            mx_printerr(card);
		mx_printerr("\n");
			*a=0;
         }
	}
	if (mx_strlen(card) == 3) {
		if (card[0] == '1' && card[1] == '0') {
			if (mx_ifsuits(card[2]) < 1) {
			mx_printerr("Invalid card suit: ");
            mx_printer(card[2]);
		mx_printerr("\n");
			*a=0;
			}
		}
		else if (mx_ifsuits(card[2]) > 0) {
			mx_printerr("Invalid card rank: ");
            		mx_printer(card[0]);
			mx_printer(card[1]);
		mx_printerr("\n");
			*a=0;
		}
		else {
			mx_printerr("Invalid card: ");
        	mx_printerr(card);
		mx_printerr("\n");
			*a=0;
		}
	}
}



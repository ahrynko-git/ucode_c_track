#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <curses.h>
#include <sys/ioctl.h>
#include "matrix.h"

int mode;

void get_term_size(int *rows, int *cols)
{
    struct winsize ws;

    if (ioctl(0, TIOCGWINSZ, &ws) < 0) 
    {
        perror("get_term_size");
        exit(EXIT_FAILURE);
    }
    
    *rows = ws.ws_row;
    *cols = ws.ws_col;
}


int prob(int percentage)
{
	int num = random() % 100;

	if(num < percentage)
		return 1;

	return 0;
}

int main(int argc, char *argv[])
{
	int opt;
	char *filename;
	WINDOW * mainwin;
	struct matrix_conf conf;
    
	conf.mode = MODE_NUMBERS;

	while((opt = getopt(argc, argv, "nf:")) != -1) 
	{
		switch(opt) 
		{
		case 'n':
			conf.mode = MODE_NUMBERS;
			break;
		case 'f':
			printf("FILE\n");
			conf.mode = MODE_FILE;
			conf.filename = (char *)optarg;
			break;
		default:
			printf("Usage: %s -n -f [Filename]\n", argv[0]);
			return 0;
		}
	}

	if ((mainwin = initscr()) == NULL) 
	{
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(EXIT_FAILURE);
	}

	matrix(&conf, mainwin);
	delwin(mainwin);
	endwin();
	refresh();

	return EXIT_SUCCESS;
}

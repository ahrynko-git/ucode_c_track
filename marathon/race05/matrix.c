#include "matrix.h"
#include <unistd.h>
#include <curses.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct column 
{
	char *rows;
	long file_offset;
};

char get_random_num(void)
{
	return 'A' + (random() % 9);
}

char get_next_char(FILE **fp, long *offset)
{
	char ch;

	fseek(*fp, *offset, SEEK_SET);
	ch = fgetc(*fp);

	if(ch == EOF) 
	{
		fseek(*fp, 0, SEEK_SET);
	}

	while(isspace(ch)) 
	{
		if(ch == EOF) 
		{
			exit(0);
			fseek(*fp, 0, SEEK_SET);
		}
		ch = fgetc(*fp);
	}
	*offset = ftell(*fp);

	return ch;
}

int matrix(struct matrix_conf *conf, WINDOW *mainwin)
{
	int r, c, i, j;
	struct column *cols;
	FILE *gfp;
	long filesize;

	if(conf->mode == MODE_FILE) 
	{
		gfp = fopen(conf->filename, "r+");

		if(!gfp) 
		{
			conf->mode = MODE_NUMBERS;
			printf("Failed to open %s\n", conf->filename);
			return 0;
		}
		fseek(gfp, 0, SEEK_END);
		filesize = ftell(gfp);
		fseek(gfp, 0, SEEK_SET);
	}


	get_term_size(&r, &c);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);

	wbkgd(mainwin, COLOR_PAIR(1));
	cols = malloc(sizeof(struct column) * c / 2);
	memset(cols, 0, sizeof(struct column) * c / 2);


repeat:
	wclear(mainwin);
	for(i = 0; i < c/2; i++) 
	{
		int flag;
		struct column *col = &cols[i];

		if(!col->rows) 
		{
			col->rows = (char *)malloc(r * sizeof(char));
			memset(col->rows, 0, r * sizeof(char));
			col->file_offset = random() % filesize;
		}

		memmove(col->rows + 1, col->rows, r - 1);
		if(col->rows[1] == 0) 
		{
			if(prob(2)) {
				if(conf->mode == MODE_NUMBERS)
					col->rows[0] = get_random_num();
				else
					col->rows[0] = get_next_char(&gfp, &col->file_offset);
			}
		} 
		else 
		{
			if(prob(10)) 
			{
				col->rows[0] = 0;
			} 
			else 
			{
				if(conf->mode == MODE_NUMBERS)
					col->rows[0] = get_random_num();
				else
					col->rows[0] = get_next_char(&gfp, &col->file_offset);
			}
		}

		flag = 0;
		attron(COLOR_PAIR(2));
		for(j = r - 1; j >= 0; j--) 
		{
			if(col->rows[j] != 0) 
			{
				if(prob(10))
					col->rows[j]++;

				if(flag && prob(40))
					col->rows[j]++;

				mvwaddch(mainwin, j, i * 2, col->rows[j]);

				if(flag) 
				{
					attroff(COLOR_PAIR(1));
					flag = 0;
					attron(COLOR_PAIR(2));
				}
			} 
			else 
			{
				flag = 1;
				attroff(COLOR_PAIR(2));
				attron(COLOR_PAIR(1));
			}
		}
	}

	refresh();
	usleep(80000);
	goto repeat;

	sleep(5);
	return 0;
}

#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *s);

void top_bottom_boarder(int map_width);
void map(int map_length, int map_width, int one_y, int one_x);
void left_right_boarder(int i);

int validation(int map_length, int map_width, int one_y, int one_x)
{
    if (map_length < 1 || map_width < 1)
        return 0;
    else if (one_x + 1 > map_width || one_y + 1 > map_length)
        return 0;
    else if (one_x < 0 || one_y < 0)
        return 0;
    return 1;
}

void race00(int map_length, int map_width, int one_y, int one_x)
{
	if (validation(map_length, map_width, one_y, one_x))
	{
		top_bottom_boarder(map_width);
		map(map_length, map_width, one_y, one_x);
		top_bottom_boarder(map_width);
	}
}

void map(int map_length, int map_width, int one_y, int one_x)
{
	for (int i = 0; i < map_length; i++)
	{
		left_right_boarder(i);

		for (int j = 0; j < map_width; j++)
		{
			if (i == one_x && j == one_y)
				mx_printchar('1');
			else
				mx_printchar('0');
		}

		left_right_boarder(i);

		mx_printchar('\n');
	}
}

void top_bottom_boarder(int map_width)
{
    mx_printstr("<=");

    if (map_width > 1)
    {
        for (int i = 0; i < map_width - 2; i++)
            mx_printchar('-');
        mx_printchar('=');
    }

    mx_printchar('>');
    mx_printchar('\n');
}

void left_right_boarder(int i)
{
	if (i % 2)
		mx_printchar('+');
	else
		mx_printchar('*');
}


#include "header.h"

int main(int argc, char **argv)
{
	char buff;
	int handle;

	if (argc < 2) 
	{
		while(read(0, &buff, 1))
			write(1, &buff, 1);
		exit (1);
	}
	else 
	{
		for (int i = 1; i < argc; i++)
		{
			if((handle = open(argv[i], O_RDONLY)) == -1) 
			{
				write(2, "mx_cp: ", mx_strlen("mx_cp: "));
				write(2, argv[i], mx_strlen(argv[i]));
				write(2, ": ", 2);
				write(2, strerror(errno), mx_strlen(strerror(errno)));
				write(2, "\n", 1);
				exit (1); 
			}
			else 
			{		
				while (read(handle, &buff, 1)) 
				{
					open(argv[i], O_RDONLY);
					write(1, &buff, 1);
					close(*argv[i]);
				}
			}
		}
	}
}

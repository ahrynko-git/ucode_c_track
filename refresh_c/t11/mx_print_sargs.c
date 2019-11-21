int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		char *tmp;

		for(int i = 1; i < argc; i++)
		{
			for(int j = 1; j < argc - 1; j++)
			{
				if (mx_strcmp(argv[j], argv[j + 1]) > 0)
				{
					tmp = argv[j];
					argv[j] = argv[j + 1];
					argv[j + 1] = tmp;
				}
			}
		}

		for(int i = 1; i < argc; i++)
		{
			mx_printstr(argv[i]);
			mx_printstr("\n");
		} 
	}

	return 0;
}

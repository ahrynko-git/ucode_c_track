#include <stdlib.h>

bool mx_isspace(char c);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str)
{
	int front = 0;
	int back = 0;
	char *tmp = NULL;

	if (str == NULL)
		return NULL;

	for (int i = 0; mx_isspace(str[i]); i++)
		front++;
	for(int j = mx_strlen(str) - 1; mx_isspace(str[j]); j--)
		back++;

	int len = mx_strlen(str) - (frnt + back);

	tmp = mx_strnew(len);

	for (int i = 0; i < len; i++)
		tmp[i] = str[i + front];

	return tmp;
}

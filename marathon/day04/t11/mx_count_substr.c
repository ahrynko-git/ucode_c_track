#include <stdio.h>

char *mx_strstr(const char *s1, const char *s2);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

int mx_count_substr(const char *str, const char *sub){
    int i = 0;
	int j = 0;
    int counter = 0;
    int n = mx_strlen(sub);

	while (str[i]) {
		j = 0;
		while (sub[j] == str[i + j]) {
			if (sub[j + 1] == '\0')
				counter++;
			j++;
		}
		i++;
	}
/*
    char *crop_str;

    while(*str){
        crop_str = mx_strstr(str, sub);
        printf("crop_str %s\n", crop_str);
        if (mx_strncmp(crop_str, sub, n) == 0)
            counter++;
        str++;
    }
*/
	return counter;
}
/*
int main(){
    char *str = "yo, yo, yo Neo yo    yo";
    char *sub = "yo";
    printf("%d\n", mx_count_substr(str, sub));
    return 0;
}
*/

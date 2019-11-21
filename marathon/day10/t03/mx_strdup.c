int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str) {
	char *dst;
	int len = 0;
	

	len = mx_strlen(str);
	dst = mx_strnew(len);
	dst = mx_strcpy(dst, str);
	return dst;

}

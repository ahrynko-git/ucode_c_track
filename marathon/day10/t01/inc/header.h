#ifndef HEADER_H
#define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

#define ERROR "usage: ./mx_cp [source_file] [target_file]\n"
#define PR_ERROR ": "

int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif

#include "../inc/pathfinder.h"

int main(int argc, char **argv) {
    char buf[1024];

    if (argc != 2) {
        mx_printstr("usage: ./pathfinder [filename]");
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);

    if (fd < 0) {
        mx_printstr("error: file ");
        mx_printstr(argv[1]);
        mx_printstr(" does not exist");
        return 1;
    }

    if (read(fd, buf, 1024) <= 0) {
        mx_printstr("error: file ");
        mx_printstr(argv[1]);
        mx_printstr(" is empty");
        close(fd);
        return 1;
    }

    close(fd);

    // TODO
    // "error: line 1 is not valid" , if the first line contains something other than digits;
    char *str = mx_file_to_str(argv[1]);

    printf("%s\n", str);

    // TODO
    // "error: line [line_value] is not valid" , if one of the remaining lines does not match the format above;

    // TODO
    // "error: invalid number of islands" , if the number received on the first line does not coincide with the number of islands.

    return 0;
}

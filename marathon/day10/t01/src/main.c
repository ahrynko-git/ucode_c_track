#include "header.h"

int main(int argc, char **argv)
{
    int src;
    int dst;
    int errno;
    char buff;

    if (argc != 3)
        mx_printerr(ERROR);
    else if ((src = open(argv[1], O_RDONLY)) == -1)
    {
        mx_printerr(argv[0]);
        mx_printerr(PR_ERROR);
        mx_printerr(argv[1]);
        mx_printerr(PR_ERROR);
        mx_printerr(strerror(errno));
    }
    else if ((dst = (open(argv[2], O_CREAT | O_EXCL | O_WRONLY,
         S_IRUSR | S_IWUSR))) == -1)
    {
        mx_printerr(argv[0]);
        mx_printerr(PR_ERROR);
        mx_printerr(argv[2]);
        mx_printerr(PR_ERROR);
        mx_printerr(strerror(errno));
    }
    else
    {
        while(read(src, &buff, 1))
            write(dst, &buff, 1);
        close(src);
        close(dst);
    }
    return 0;
}

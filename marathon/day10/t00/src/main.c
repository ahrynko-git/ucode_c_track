#include "header.h"

int main(int argc, char **argv) 
{

    if (argc != 2)
    {
        write(1, "usage: ./read_file [file_path]", 30);
        return 1;
    }

    int file;
    char buffer;

    file = open(argv[1], O_RDONLY);

    if ((read(file, (void *)0, 0) < 0) || file == -1)
    {
        write(2, "error\n", 6);
        return 1;
    }

    while (read (file, &buffer, 1))
        write(1, &buffer, 1);

    close(file);

  return 0;
}

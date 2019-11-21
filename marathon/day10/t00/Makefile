NAME = read_file
SRCS = src/main.c \

INC = inc/header.h \

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: $(NAME)
$(NAME): install clean

install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCS) -I inc
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf header.h \
	@rm -rf main.c \

reinstall: all

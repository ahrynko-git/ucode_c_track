NAME = mx_cp
SRCS = src/main.c \
	   src/mx_strlen.c \
	   src/mx_printerr.c \

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
	@rm -rf main.c mx_strlen.c mx_printerr.c

reinstall: all

NAME =   mx_cat

SRCS = 	 src/main.c \
		 src/mx_strlen.c
		
INC =    inc/header.h

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
	@rm -rf main.c mx_strlen.c

reinstall: all

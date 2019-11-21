NAME = race03

SRCS = 	src/mx_invalidcard.c \
		src/mx_popular_int.c \
		src/mx_printer.c \
		src/mx_printstr.c \
		src/race03.c \
		src/mx_miscalculation.c \
		src/mx_printchar.c \
		src/mx_printerr.c \
		src/mx_strlen.c \
		src/mx_charint.c \
		src/mx_sort.c \
		src/mx_duplicate.c \
		src/mx_ifif.c 



INC = inc/poker.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCS) -I $(INC)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf poker.h
	@rm -rf mx_invalidcard.c \
		mx_popular_int.c \
		mx_printer.c \
		mx_printstr.c \
		race03.c \
		mx_miscalculation.c \
		mx_printchar.c \
		mx_printerr.c \
		mx_strlen.c \
		mx_charint.c \
		mx_sort.c \
		mx_duplicate.c \
		mx_ifif.c \
reinstall: uninstall clean all

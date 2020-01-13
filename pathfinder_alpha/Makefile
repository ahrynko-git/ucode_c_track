NAME = pathfinder

CFLG = -std=c11 -Wall -Wextra -Werror -Wpedantic
COMP = clang

SRCD = src
INCD = inc
OBJD = obj

LMXD = libmx
LMXA:= $(LMXD)/libmx.a
LMXI:= $(LMXD)/inc

INC = pathfinder.h
INCS = $(addprefix $(INCD)/, $(INC))

SRC = mx_create_dex_matrix.c mx_get_arr_islands.c mx_pf_errors.c \
mx_deijkstra.c mx_get_matrix.c mx_pf_split.c mx_get_all_paths.c \
mx_main.c mx_printpaths.c \

SRCS = $(addprefix $(SRCD)/, $(SRC))
OBJS = $(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install clean

install: $(LMXA) $(NAME)

$(NAME): $(OBJS)
	@$(COMP) $(CFLG) $(OBJS) -L$(LMXD) -lmx -o $@

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD) -I$(LMXI)

$(OBJS): | $(OBJD)

$(OBJD):
	@mkdir -p $@

$(LMXA):
	@make -sC $(LMXD)

clean:
	@make -sC $(LMXD) $@
	@rm -rf $(OBJD)

uninstall: clean
	@make -sC $(LMXD) $@
	@rm -f $(NAME)

reinstall: uninstall install

NAME = push_swap.a
AOUT = push_swap

SRCS_T = tools/ft_double.c tools/ft_lenjoin.c tools/is_valid.c tools/ft_join.c tools/ft_build_sa.c \
         tools/ft_befor_lst.c tools/lststack.c tools/get_lstmin.c tools/get_lstmax.c tools/get_lstsize.c \
         tools/showlst.c tools/set_pos_lstx.c tools/shefting.c tools/get_lsthooks.c

SRCS_L = src/libft/ft_atoi.c src/libft/ft_putchar_fd.c src/libft/ft_putendl_fd.c src/libft/ft_putnbr_fd.c \
         src/libft/ft_split.c src/libft/ft_isdigit.c src/libft/ft_putstr_fd.c src/libft/ft_bzero.c src/libft/ft_calloc.c

SRCS_LG = src/longest/ft_tsub.c src/longest/ft_subnode.c src/longest/nsub_to_sb.c \
		src/longest/get_bsmove_lst.c src/longest/bolt.c src/longest/ft_push_bm.c \
		src/longest/ft_sorting.c

SRCS_F = src/functions/rotate.c src/functions/swap.c src/functions/sort_t.c src/functions/ft_switch.c \
         src/functions/sort_th.c src/functions/rrotate.c src/functions/push_a.c src/functions/push_b.c src/functions/move_a.c \
         src/functions/move_b.c

SRC = main.c
OBJ = main.o
OBJS_T = $(SRCS_T:.c=.o)
OBJS_L = $(SRCS_L:.c=.o)
OBJS_LG = $(SRCS_LG:.c=.o)
OBJS_F = $(SRCS_F:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEAD = push_swap.h
CC = cc
GREEN = \033[1;32m
YELLOW		=	\e[38;5;226m
RESET = \033[0m
OK	=	[$(GREEN)SUCCESS$(RESET)]
NO	=	[$(YELLOW)INFO$(RESET)]
HEADERS = $(wildcard *.h)
%.o: %.c ${HEADERS}
	@${CC} ${FLAGS} -c $< -o $@

all: $(NAME) $(AOUT)

$(NAME): $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ar rc $(NAME) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@ranlib $(NAME)

$(AOUT): $(NAME) $(OBJ)
	@$(CC) $(FLAGS) -o $@ $(OBJ) $(NAME)
	@$(RM) $(OBJ)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		push_swap is running "
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@printf "$(OK) push_swap ready.\n"

clean:
	@$(RM) -rf $(OBJ) $(OBJS_L) $(OBJS_T) $(OBJS_F) $(OBJS_LG)
	@printf "$(NO) object files removed.\n"

fclean: clean
	@$(RM) -rf $(NAME) $(AOUT)
	@printf "$(NO) $(NAME) removed.\n"

re: fclean all

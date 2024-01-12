SRCS  = rotate.c swap.c sort_t.c ft_switch.c \
		sort_th.c rrotate.c push_a.c push_b.c move_a.c \
		move_b.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

NAME	= fun.a
HEAD	= fun.h
CC = cc
%.o: %.c ${HEAD}
	@${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJS}
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		functions Running •"
	@echo "$(GREEN)------------------------------------------------------$(RESET)"

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

SRCS  = ft_double.c ft_lenjoin.c is_valid.c ft_join.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

NAME	= tools.a
HEAD	= tools.h
CC = cc
%.o: %.c ${HEAD}
	@${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJS}
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)				• TOOLS Running •"
	@echo "$(GREEN)------------------------------------------------------$(RESET)"

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

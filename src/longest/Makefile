SRCS  = ft_tsub.c ft_subnode.c  nsub_to_sb.c  get_bsmove_lst.c\

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

NAME	= logest.a
HEAD	= logest.h
CC = cc
%.o: %.c ${HEAD}
	@${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJS}
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		logest Running •"
	@echo "$(GREEN)------------------------------------------------------$(RESET)"

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

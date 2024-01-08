SRCS  = ft_double.c ft_lenjoin.c is_valid.c ft_join.c ft_build_sa.c \
		 ft_befor_lst.c lststack.c get_lstmin.c get_lstmax.c get_lstsize.c \
		 showlst.c set_pos_lstx.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

NAME	= tools.a
HEAD	= tools.h
CC = gcc
%.o: %.c ${HEAD}
	@${CC} ${FLAGS} -c $< -o $@

$(NAME):${OBJS}
	@ar rc $(NAME) $(OBJS)
	@echo "$(BLUE)------------------------------------------------------$(RESET)"
	@echo "$(BLUE)		• TOOLS Running •"
	@echo "$(BLUE)------------------------------------------------------$(RESET)"

all: $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

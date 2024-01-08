SRCS = ft_atoi.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_split.c ft_isdigit.c ft_putstr_fd.c


NAME = libft.a
BONUS = bonus
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -rf
INCS = .

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

all: ${NAME}

${NAME}: ${OBJS}
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@echo "$(GREEN)		libft Running • "
	@echo "$(GREEN)------------------------------------------------------$(RESET)"
	@${LIBC} ${NAME} ${OBJS}


clean:
	@echo "$(YELLOW)libft has cleaned up!$(RESET)"
	@rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	@rm -f $(NAME)
re: fclean all

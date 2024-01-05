NAME  = push_swap.a
AOUT  = push_swap


SRC  = main.c
OBJ	= main.o

FLAGS	= -Wall -Wextra -Werror

TOOLS	=	tools/tools.a
TOOLS_DIR	=	tools

LIBFT	=	src/libft/libft.a
LIBFT_DIR	=	src/libft

INC		=	push_swap.h
CC = gcc

GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RED = \033[1;31m
RESET		=	\e[0m


OK	=	[$(GREEN)SUCCESS$(RESET)]
_INFO	=	[$(YELLOW)cleaning$(RESET)]
NO	=	[$(RED)INFO$(RESET)]

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

all: $(TOOLS)  $(LIBFT) $(AOUT)

$(AOUT): $(OBJ) $(INC)
	@$(CC) $(FLAGS) $(TOOLS) $(LIBFT) -o $@ $(OBJ)
	@ $(RM) $(OBJ)
	@printf "$(OK) push_swap ready.\n"

$(TOOLS):
	@ $(MAKE) -C $(TOOLS_DIR)

$(LIBFT):
	@ $(MAKE) -C $(LIBFT_DIR)


clean:
	@ $(MAKE) clean -C $(TOOLS_DIR)
	@ $(MAKE) clean -C $(LIBFT_DIR)
	@ $(RM) $(OBJ)
	@printf "$(_INFO) object files removed.\n"

fclean: clean
	@ $(MAKE) fclean -C $(TOOLS_DIR)
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(RM) $(AOUT)
	@printf "$(_INFO) libft removed.\n"
	@printf "$(_INFO) tools removed.\n"
	@printf "$(_INFO) push_swap removed.\n"

re: fclean all
.PHONY: all clean fclean re
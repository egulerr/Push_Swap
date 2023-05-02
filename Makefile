NAME = push_swap

RESET = \033[0m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
RED = \033[31m

SRCS =		utils/ft_atoi.c 	\
			utils/ft_split.c 	\
			utils/push.c		\
			utils/rotate.c		\
			utils/rotaterev.c	\
			utils/swap.c		\
			checkandcreate.c	\
			main.c				\
			sorts.c				\
			utils/is_digit.c			

OBJS = $(SRCS:.c=.o)
CC = @gcc
RM = @rm -rf
OUT = -o push_swap
CFLAGS = -Wall -Werror -Wextra
MFLAGS = ./utils/ft_printf/libftprintf.a

all: $(MFLAGS) $(NAME)

$(MFLAGS):
	make -C ./utils/ft_printf/

$(NAME): $(OBJS)
	@echo "$(YELLOW)>- Compiling... [$(NAME)] $(RESET)"
	$(CC) $(CFLAGS) $(OUT) $(OBJS) $(MFLAGS)
	@echo "$(GREEN)>- Finished! $(RESET)"

clean:
	@echo "$(RED)>- Deleting... $(RESET)"
	$(RM) $(OBJS)
	$(RM) ./utils/ft_printf/*.o
	@echo "$(BLUE)>- Successfully! $(RESET)"

fclean: clean
	$(RM) $(NAME)
	$(RM) ./utils/ft_printf/libftprintf.a

re: fclean $(MFLAGS) $(NAME)

norm:
	@norminette utils/ft_printf/*.[ch]
	@norminette utils/*.c
	@norminette *.[ch]

.PHONY: all clean fclean re
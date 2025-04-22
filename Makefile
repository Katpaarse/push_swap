NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
CFILES = src/main.c src/parser.c src/utils.c src/swap_operations.c src/print_stack.c src/push_operations.c \
src/rotate_operations.c src/sorting_small_stack.c src/reverse_rotate_operations.c src/node_utils.c
OFILES = $(CFILES:.c=.o)
LIBFTDIR = ./src/libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OFILES) -L$(LIBFTDIR) -lft -o $(NAME)

$(LIBFT):
	@make -C $(LIBFTDIR)

clean:
	rm -f $(OFILES)
	@make -C $(LIBFTDIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFTDIR) fclean

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
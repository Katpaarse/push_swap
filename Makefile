NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra
CFILES = src/main.c
OFILES = $(CFILES:.c=.o)
LIBFTDIR = ./src/libft
LIBFT = $(LIBFTDIR)/libft.a

all: $(NAME)

$(NAME): $(OFILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

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
SRC		= get_next_line.c main.c
NAME	= gnl
MAKE	= make

$(NAME):
	$(MAKE) -C libft/
	gcc -L libft/ -I libft/includes $(SRC) -o $(NAME) -lft

clean:
	rm -rf $(SRC:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

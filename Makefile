SRC		= get_next_line.c main.c
NAME	= gnl
MAKE	= make

$(NAME):
	$(MAKE) -C libft/
	gcc -L libft/ -I libft/includes $(SRC) -o $(NAME) -lft

clean:
	$(MAKE) -C libft/ clean
	rm -rf $(SRC:.c=.o)

fclean: clean
	$(MAKE) -C libft/ fclean
	rm -rf $(NAME) $(NAME).zip

re: fclean $(NAME)

zip: fclean $(NAME)
	$(MAKE) clean
	zip -r $(NAME).zip . -x *.git*

NAME	=	libft.a

FLAGS	=	-Wall -Wextra -Werror
fPIC	=

SRC_DIR =	srcs
OBJ_DIR =	objs
INC		=	includes

SRC 	=	$(wildcard $(SRC_DIR)/*.c)
OBJ		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): static

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	gcc -I$(INC) $(FLAGS) $(fPIC) -c $< -o $@

static: check_dir $(OBJ) 
	ar -r $(NAME) $(OBJ)
	ranlib $(NAME)

dynamic: fPIC = -fPIC

dynamic: check_dir $(OBJ)

check_dir:
	if [ ! -d $(OBJ_DIR) ]; then mkdir $(OBJ_DIR); fi;

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

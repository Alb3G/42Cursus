SRC = ft_bzero.c ft_isalnum.c ft_isdigit.c
NAME = libft.a
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
%.o : %.c
	gcc $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: clean fclean re
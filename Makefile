SRC = main.c ft_strlcpy.c
NAME = libft.a
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:$(NAME) exec

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o : %.c
	gcc $(FLAGS) -c $< -o $@
exec: $(OBJ)
	gcc $(FLAGS) $(OBJ) -o exec
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) $(OBJ) exec

re: fclean all

.PHONY: clean fclean re
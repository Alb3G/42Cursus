SRC = 	ft_strlcat.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_isalnum.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_isascii.c \
		ft_isalpha.c \
		ft_bzero.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		# main.c \

NAME = libft.a
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	gcc $(FLAGS) -c $< -o $@
# exec: $(OBJ)
# 	gcc $(FLAGS) $(OBJ) -o exec
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: clean fclean re
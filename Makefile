NAME = libft.a
CC = gcc
CFLAGS =  -Wall -Wextra -Werror -g
INCLUDE = ./includes/libft.h
FILES =			./Sources/ft_memset.c \
				./Sources/ft_bzero.c \
				./Sources/ft_memcpy.c \
				./Sources/ft_memccpy.c \
				./Sources/ft_memmove.c \
				./Sources/ft_memchr.c \
				./Sources/ft_memcmp.c \
				./Sources/ft_strlen.c \
				./Sources/ft_strlcpy.c \
				./Sources/ft_strlcat.c \
				./Sources/ft_strchr.c \
				./Sources/ft_strrchr.c \
				./Sources/ft_strnstr.c \
				./Sources/ft_strncmp.c \
				./Sources/ft_atoi.c \
				./Sources/ft_isalpha.c \
				./Sources/ft_isdigit.c \
				./Sources/ft_isalnum.c \
				./Sources/ft_isascii.c \
				./Sources/ft_isprint.c \
				./Sources/ft_toupper.c \
				./Sources/ft_tolower.c \
				./Sources/ft_calloc.c \
				./Sources/ft_strdup.c \
				./Sources/ft_substr.c \
				./Sources/ft_strjoin.c \
				./Sources/ft_strtrim.c \
				./Sources/ft_split.c \
				./Sources/ft_itoa.c \
				./Sources/ft_strmapi.c \
				./Sources/ft_putchar_fd.c \
				./Sources/ft_putstr_fd.c \
				./Sources/ft_putendl_fd.c \
				./Sources/ft_putnbr_fd.c \

FILES_BONUS =	./Sources/ft_lstnew.c \
				./Sources/ft_lstadd_front.c \
				./Sources/ft_lstsize.c \
				./Sources/ft_lstlast.c \
				./Sources/ft_lstadd_back.c \
				./Sources/ft_lstdelone.c \
				./Sources/ft_lstclear.c \
				./Sources/ft_lstiter.c \
				./Sources/ft_lstmap.c \

OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(FILES_BONUS:.c=.o)

all:		$(NAME) $(INCLUDE)

$(NAME):	$(OBJ)
			ar rcs $(CC) $(CFLAGS) $(NAME) $(OBJ) -c $(NAME)

bonus:		$(OBJ_BONUS) $(NAME)
			ar rcs $(CC) $(OBJ_BONUS)

clean:
			rm -f $(OBJ)
			rm -f $(OBJ_BONUS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

rebonus:
			fclean bonus

.PHONY: all clean fclean re bonus rebonus

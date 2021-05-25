GCC = gcc -Wall -Wextra -Werror 

all:
	$(GCC) ft_memmove.c

run:
	./a.out
GCC = gcc -Wall -Wextra -Werror 

all:
	$(GCC) ft_memchr.c

run:
	./a.out
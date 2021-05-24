GCC = gcc -Wall -Wextra -Werror 

all:
	$(GCC) ft_bzero.c  

run:
	./a.out
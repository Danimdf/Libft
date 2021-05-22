GCC = gcc -Wall -Wextra -Werror 

all:
	$(GCC) *.c

run:
	$(GCC) ./a.out
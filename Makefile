GCC = gcc -Wall -Wextra -Werror 

all:
	$(GCC) *.c 

run:
	./a.out

clean:
	rm a.out
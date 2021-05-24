#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

int main()
{
    char str;
    str = "Olá pessoas";
    ft_memset(str,'$',3);
    printf("%s\n", str);
}

int main () 
{
    char s[] = "miau";
    printf("%s\n", s);
    ft_bzero(s, 6);
    printf("%s\n", s);
    return 0;
}

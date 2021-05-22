#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

int main()
{
    char *str;
    str = "Olá pessoas";
    ft_memset(str,'$',3);
    printf("%s\n", str);
}
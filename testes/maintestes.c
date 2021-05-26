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
    ft_bzero(s, 5);
    printf("%s\n", s);
    return 0;
}

int main () 
{
   const char src[50] = "Amo pipoca";
   char dest[50];
   strcpy(dest,"BOM DIA GRUPO");
   printf("%s\n", dest);
   ft_memcpy(dest, src, strlen(src));
   printf("%s\n", dest);
   
   return(0);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
    
    return EXIT_SUCCESS;
}









int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}


#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1""\n");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}


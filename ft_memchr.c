/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:38:54 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/25 09:24:41 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char cc;
    const unsigned char *str1;

    cc = c;

    while(0 < n)
    {
        str1 = str;
        str1++;
        --n;
    }
    if(*str1 == cc)
    {
        return((unsigned char *)str1);
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
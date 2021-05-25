/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:34:33 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/25 00:21:13 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memmove(void *s1, const void *s2, size_t n)
{
    size_t i;
    char *str1;
    const char *str2;
    
    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    
    
    if(str2 < str1 && str1 < str2 + n)
    {
        while (0 < n)
        {
            str1 += n;
            str2 += n;
            *--str1 = *--str2;
            --n;
        }
    }
    else
    {
        while(0 < n)
        {
            *str1++ = *str2++;
            --n;
        }
    }
    return((char *)s1);
}

#include <stdio.h>

int main () {
   char dest[] = "antes";
   const char src[]  = "depois";

   //printf("dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 6);
   printf("dest = %s, src = %s\n", dest, src);

   return(0);
}
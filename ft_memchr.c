/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:38:54 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/25 12:28:36 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    unsigned char *str1;

    i = 0;
    str1 = (unsigned char *)str;
    while(i < n)
    {
         if(str1[i] == (unsigned char)c)
        {
            return(&str1[i]);
        }
        i++;
    }
    return (NULL);
}
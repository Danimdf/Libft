/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:59:19 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/25 08:11:57 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;

    s1 = (unsigned char *)dest;
    s2 = (unsigned char *)src;

    while(0 < n)
    {
        *s1 = *s2;
        s1++;
        s2++;
        n--;
    }
    return ((char *)s1);
}

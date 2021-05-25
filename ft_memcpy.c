/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 12:59:19 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/24 22:03:44 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *s1;
    const char *s2;

    s1 = (char *)dest;
    s2 = (const char *)src;

    while(0 < n)
    {
        *s1 = *s2;
        s1++;
        s2++;
        n--;
    }
    return ((char *)s1);
}

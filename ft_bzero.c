/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 08:27:10 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/24 22:03:16 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void ft_bzero(void *s, size_t n)
{
    char *ptr;
    
    ptr = (char *)s;
    while(n > 0)
    {
        *ptr = '\0';
        ptr++;
        n--;
    }
}

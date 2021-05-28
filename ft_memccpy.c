/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:41:23 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/28 01:36:24 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src2;

	i = 0;
	dst1 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dst1[i] = src2[i];
		if (src2[i] == (unsigned char) c)
		{
			return (&dst1[i]);
		}
		i++;
	}
	return (NULL);
}

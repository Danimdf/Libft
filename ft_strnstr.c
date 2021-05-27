/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:44:03 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/27 16:16:13 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*b;
	unsigned char	*l;

	i = 0;
	b = (unsigned char *)big;
	l = (unsigned char *)little;
	if (!l[i])
		return ((char *)&b[i]);
	while (i < len && b[i])
	{
		j = 0;
		while (((i + j) < len) && (b[i + j]))
		{
			if (!l[j + 1])
				return ((char *)&b[i]);
			j++;
		}
		i++;
	}
	return (0);
}

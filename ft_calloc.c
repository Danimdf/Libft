/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:29:01 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/27 14:47:51 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*total_size;
	size_t	i;

	i = 0;
	total_size = nitems * size;
	if (total_size == 0)
		return (NULL);
	else
	{
		while (i < (nitems * size))
		{
			total_size[i] = '\0';
			i++;
		}
		return (total_size);
	}
}

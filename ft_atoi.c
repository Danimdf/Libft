/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 17:24:55 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/27 11:21:16 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int resp;

    i = 1;
    resp = 0;
    while ((*str >= '\t' && *str <= '\r') || *str == ' ')
            str++;
    if (*str == '+' || *str == '-')
    {
            if (*str == '-')
                    i *= -1;
                str++;
    }
    while (ft_isdigit((int)*str))
    {
            resp = (resp * 10) + (*str - 48);
            str++;
    }
    return (resp * i)
}
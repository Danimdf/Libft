/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:45:42 by dmonteir          #+#    #+#             */
/*   Updated: 2021/05/22 11:13:31 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

int main()
{
    char *str;
    str = "Olá pessoas";
    ft_memset(str,'$',3);
    printf("%s\n", str);
}
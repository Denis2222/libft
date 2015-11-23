/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:31:40 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/23 12:42:53 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cswap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char	*ft_strrev(char *str)
{
	int length;
	int debut;
	int fin;

	debut = 0;
	length = ft_strlen(str);
	fin = length - 1;
	while (debut < fin)
	{
		ft_cswap(&str[debut], &str[fin]);
		debut++;
		fin--;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:52:30 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/25 19:59:10 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	int		length;
	int		a;
	int		neg;
	char	*str;

	neg = 0;
	if (n < 0)
		neg = 1;
	a = n;
	length = 1;
	while (a > 9)
	{
		a = a / 10;
		length++;
	}
	str = (char*)ft_memalloc(length + neg);
	ft_putnbr(length);

	return (ft_strdup("TOTO"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/20 02:22:16 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/20 02:31:47 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_pow(int nb, int e)
{
	int		i;
	long	total;

	i = 1;
	if (e == 0)
		return (1);
	total = nb;
	while (i < e)
	{
		total *= nb;
		i++;
	}
	return (total);
}

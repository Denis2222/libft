/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:26:47 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/23 12:47:26 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_atoi_white_allow(char c)
{
	return (c == ' '
			|| c == '\n'
			|| c == '\t'
			|| c == '\v'
			|| c == '\r'
			|| c == '\f');
}

long long	ft_atoi_int_overflow(const char *str, int pos, long int nb)
{
	long long int	result;
	long long		int_max;

	int_max = 2147483647;
	if ((nb > int_max / 10))
	{
		return (int_max);
	}
	result = (nb * 10) + (str[pos] - '0');
	return (result);
}

int			ft_atoi(const char *str)
{
	long long	nb;
	int			length;
	int			pos;
	int			positive;

	pos = 0;
	nb = 0;
	length = ft_strlen((char *)str);
	positive = 1;
	while (ft_atoi_white_allow(str[pos]))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			positive = -1;
		pos++;
	}
	while (pos < length)
	{
		if (!ft_isdigit(str[pos]))
			return (nb * positive);
		nb = ft_atoi_int_overflow(str, pos, nb);
		pos++;
	}
	return (nb * positive);
}

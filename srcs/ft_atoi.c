/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:26:47 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/27 11:40:19 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_atoi_white_allow(char c)
{
	return (c == ' '
			|| c == '\n'
			|| c == '\t'
			|| c == '\v'
			|| c == '\r'
			|| c == '\f');
}

int			ft_atoi(const char *str)
{
	int	nb;
	int	length;
	int	pos;
	int	positive;

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
		nb = (nb * 10) + (str[pos] - '0');
		pos++;
	}
	return (nb * positive);
}

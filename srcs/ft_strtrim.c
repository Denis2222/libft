/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 21:14:15 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/25 19:38:42 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

int		istrimable(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	int				i;
	int				length;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	length = ft_strlen(s);
	start = 0;
	end = length;
	while (i < length && istrimable(s[i]))
	{
		i++;
		start = i;
	}
	i = length - 1;
	while (i >= (int)start && istrimable(s[i]))
	{
		end = i;
		i--;
	}
	return (ft_strsub(s, start, end - start));
}

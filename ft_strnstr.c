/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:31:24 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/27 12:15:57 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strnstr(char *str, const char *to_find, size_t n)
{
	size_t	pos;
	int		x;

	if (ft_strlen((char *)to_find) == 0)
		return (str);
	pos = 0;
	x = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[x])
		{
			x++;
			if (to_find[x] == '\0')
				return (&str[pos - x + 1]);
		}
		else
		{
			pos = pos - x;
			x = 0;
		}
		pos++;
		if (pos >= n)
			return (NULL);
	}
	return (NULL);
}

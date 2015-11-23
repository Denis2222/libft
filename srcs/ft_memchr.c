/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:28:14 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/23 11:34:52 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sc;
	size_t	p;

	sc = (char*)s;
	p = 0;
	while (p < n)
	{
		if (sc[p] == (char)c)
			return (&sc[p]);
		p++;
	}
	return (NULL);
}
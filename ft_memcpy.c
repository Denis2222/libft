/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:29:24 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/25 14:26:48 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *s;
	char *d;

	s = (char*)src;
	d = (char*)dest;
	while (n--)
	{
		*d = *s;
		if (n)
		{
			d++;
			s++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 11:29:33 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/25 14:25:18 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)ft_strdup((char *)src);
	dest = ft_strncpy((char *)dest, (char *)temp, n);
	return (dest);
}

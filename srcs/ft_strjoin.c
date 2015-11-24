/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:51:12 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/24 20:57:11 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length;

	length = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	str = (char *)malloc(sizeof(char) * length + 1);
	str = ft_strcpy(str, (char *)s1);
	str = ft_strcat(str, (char *)s2);
	return (str);
}

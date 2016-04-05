/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 11:13:46 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/04/05 11:13:55 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrepchr(char *str, char c, char n)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			str[i] = n;
		i++;
	}
	return (str);
}

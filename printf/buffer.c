/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 00:17:03 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/22 09:17:11 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrn(char *buffer, int len, int fd)
{
	write(fd, buffer, len);
}

void	ft_putstrbuf(char *str, int fd)
{
	while (*str)
	{
		ft_putbuffer(*str, 0, fd);
		str++;
	}
}

char	*cleanbuffer(char **buffer, int *len, int *wc, int fd)
{
	char	*tmp;

	if (fd == -10)
	{
		tmp = ft_strdup(*buffer);
		if (*buffer)
		{
			freestr(*buffer);
			*buffer = NULL;
		}
		*len = 0;
		*wc = 0;
		return (tmp);
	}
	else
		ft_putstrn(*buffer, *len, fd);
	if (*buffer)
	{
		freestr(*buffer);
		*buffer = NULL;
	}
	*len = 0;
	*wc = 0;
	return (NULL);
}

char	*ft_putbuffer(char c, int flush, int fd)
{
	static char	*buffer;
	static int	wc;
	static int	len;

	if (flush && fd == -10)
		return (cleanbuffer(&buffer, &len, &wc, fd));
	if (flush || len > PRINTFBUFFER)
		cleanbuffer(&buffer, &len, &wc, fd);
	if (!flush)
	{
		if (!len)
			len = 0;
		if (!wc)
			wc = 0;
		if (!buffer)
			buffer = ft_memalloc(PRINTFBUFFER + 1);
		buffer[wc] = c;
		wc++;
		len++;
	}
	return (NULL);
}

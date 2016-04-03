/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/22 00:17:03 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/03/02 10:06:49 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstrn(char *buffer, int len)
{
	write(1, buffer, len);
}

void	ft_putstrbuf(char *str)
{
	while (*str)
	{
		ft_putbuffer(*str, 0);
		str++;
	}
}

void	cleanbuffer(char **buffer, int *len, int *wc)
{
	ft_putstrn(*buffer, *len);
	if (*buffer)
	{
		freestr(*buffer);
		*buffer = NULL;
	}
	*len = 0;
	*wc = 0;
}

void	ft_putbuffer(char c, int flush)
{
	static char	*buffer;
	static int	wc;
	static int	len;

	if (flush || len > PRINTFBUFFER)
		cleanbuffer(&buffer, &len, &wc);
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
}

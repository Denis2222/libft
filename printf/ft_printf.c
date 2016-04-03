/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 20:28:06 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/03/02 10:06:53 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	writechar(char c, int *len)
{
	(*len)++;
	ft_putbuffer(c, 0);
}

void	intinit(int *len, int *pos)
{
	*len = 0;
	*pos = 0;
}

int		ft_printf(char *format, ...)
{
	va_list		pa;
	t_opts		*new;
	int			pos;
	int			len;

	intinit(&len, &pos);
	if (!format)
		return (-1);
	va_start(pa, format);
	while (*format)
	{
		evalcolor(&format, &pa, len);
		if (*format == '%')
		{
			new = newopts(format, &pos, &pa);
			len += renderopts(new, &pa);
			format += cleanopts(new);
		}
		else
			writechar(*format, &len);
		incremente(&format, &pos);
	}
	va_end(pa);
	ft_putbuffer(0, 1);
	return (len);
}

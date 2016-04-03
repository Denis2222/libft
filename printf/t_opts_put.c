/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_opts_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 09:50:08 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/03/02 10:10:29 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		putoptsstr(t_opts *opts, char *str)
{
	int	len;

	len = ft_strlen(str);
	if (opts->type == 'c' && len == opts->width - 1 && opts->flags['-'])
		ft_putbuffer(0, 0);
	ft_putstrbuf(str);
	freestr(str);
	str = NULL;
	if (len == 0 && opts->type == 'c')
	{
		ft_putbuffer(0, 0);
		return (1);
	}
	else if (len == opts->width - 1 && opts->type == 'c')
	{
		if (!opts->flags['-'])
			ft_putbuffer(0, 0);
		return (len + 1);
	}
	else
		return (len);
}

int		putoptswstr(t_opts *opts, wchar_t *wstr)
{
	int	len;

	len = ft_wstrlen(wstr);
	ft_putwstr(wstr);
	freewstr(wstr);
	if (len == 0 && opts->type == 'C')
	{
		ft_putwchar(0);
		return (1);
	}
	return (len);
}

int		putoptsnull(t_opts *opts)
{
	if (opts->type == 0)
		return (0);
	else
	{
		ft_putstrbuf("(null)");
		return (ft_strlen("(null)"));
	}
}

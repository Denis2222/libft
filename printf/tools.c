/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 22:01:50 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/22 09:17:36 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	freestr(char *str)
{
	if (*str)
		free(str);
	str = NULL;
}

void	freewstr(wchar_t *wstr)
{
	if (*wstr && ft_wstrlen(wstr) > 0)
		free(wstr);
	wstr = NULL;
}

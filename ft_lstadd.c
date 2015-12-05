/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:31:52 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/27 11:32:11 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst == NULL)
		return ;
	if (new == NULL)
		return ;
	new->next = *alst;
	*alst = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:35:28 by dmoureu-          #+#    #+#             */
/*   Updated: 2015/11/26 18:45:47 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	elem = NULL;
	elem = (t_list*)malloc(sizeof(t_list));
	if (elem)
	{
		elem->content = (void *)content;
		elem->content_size = content_size;
		elem->next = NULL;
	}
	return (elem);
}

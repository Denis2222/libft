/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:46:09 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 16:53:38 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		check_map_case(t_filler *filler, int x, int y)
{
	if (x >= 0 && x < filler->map_x)
	{
		if (y >= 0 && y < filler->map_y)
		{
			if (filler->map[y][x] == '.')
				return (0);
			if (filler->map[y][x] == 'o' || filler->map[y][x] == 'O')
				return (1);
			if (filler->map[y][x] == 'x' || filler->map[y][x] == 'X')
				return (2);
		}
	}
	return (-1);
}

int		check_piece_size(char *buffer, t_filler *filler)
{
	char **tab;

	tab = ft_strsplit(buffer, ' ');
	if (ft_tablen(tab) == 3)
	{
		if (ft_atoi(tab[1]) && ft_atoi(tab[2]))
		{
			filler->piece_y = ft_atoi(tab[1]);
			filler->piece_x = ft_atoi(tab[2]);
			filler->piece = malloc_map(filler->piece_x, filler->piece_y);
			ft_tabfree(tab);
			return (1);
		}
	}
	ft_tabfree(tab);
	return (0);
}

int		check_map_size(char *buffer, t_filler *filler)
{
	char **tab;

	tab = ft_strsplit(buffer, ' ');
	if (ft_tablen(tab) == 3)
	{
		if (ft_atoi(tab[1]) && ft_atoi(tab[2]))
		{
			filler->map_y = ft_atoi(tab[1]);
			filler->map_x = ft_atoi(tab[2]);
			filler->map = malloc_map(filler->map_x, filler->map_y);
			ft_tabfree(tab);
			return (1);
		}
	}
	ft_tabfree(tab);
	return (0);
}

int		check_name(char *buffer)
{
	if (strncmp(buffer, "$$$ exec p1", 11) == 0)
		return (1);
	else if (strncmp(buffer, "$$$ exec p2", 11) == 0)
		return (2);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:47:29 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 16:54:14 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

t_filler	*newfiller(void)
{
	t_filler *filler;

	filler = (t_filler*)malloc(sizeof(t_filler));
	filler->player = 0;
	filler->map_x = 0;
	filler->map_y = 0;
	filler->piece_x = 0;
	filler->piece_y = 0;
	filler->way = 0;
	filler->map = NULL;
	filler->piece = NULL;
	return (filler);
}

char		**malloc_map(int x, int y)
{
	char	**map;
	int		mx;
	int		my;

	mx = 0;
	my = 0;
	map = (char**)malloc(sizeof(char*) * (y + 1));
	while (my < y)
	{
		map[my] = (char*)malloc(sizeof(char) * (x + 1));
		ft_bzero(map[my], x + 1);
		my++;
	}
	map[my] = 0;
	return (map);
}

void		free_map(t_filler *filler)
{
	int		my;

	my = 0;
	while (my < filler->map_y)
	{
		free(filler->map[my]);
		filler->map[my] = NULL;
		my++;
	}
	free(filler->map);
	filler->map = NULL;
}

void		free_piece(t_filler *filler)
{
	int		my;

	my = 0;
	while (my < filler->piece_y)
	{
		free(filler->piece[my]);
		filler->piece[my] = NULL;
		my++;
	}
	free(filler->piece);
	filler->piece = NULL;
}

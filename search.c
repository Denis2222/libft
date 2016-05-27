/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:45:06 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 15:50:33 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		search_position_right(t_filler *filler)
{
	int	x;
	int	y;

	x = filler->map_x - 1;
	while (x >= 0)
	{
		y = 0;
		while (y < filler->map_y)
		{
			if (pos_piece_valide(filler, x, y))
			{
				ft_dprintf(1, "%d %d\n", y, x);
				return (1);
			}
			y++;
		}
		x--;
	}
	return (0);
}

int		search_position_down(t_filler *filler)
{
	int	x;
	int	y;

	y = filler->map_y - 1;
	while (y >= 0)
	{
		x = filler->map_x - 1;
		while (x >= 0)
		{
			if (pos_piece_valide(filler, x, y))
			{
				ft_dprintf(1, "%d %d\n", y, x);
				return (1);
			}
			x--;
		}
		y--;
	}
	return (0);
}

int		search_position(t_filler *filler)
{
	int	x;
	int	y;

	if (filler->way % 3 == 1)
		return (search_position_down(filler));
	if (filler->way % 3 == 2)
		return (search_position_right(filler));
	y = -1;
	while (y < filler->map_y)
	{
		x = -1;
		while (x < filler->map_x)
		{
			if (pos_piece_valide(filler, x, y))
			{
				ft_dprintf(1, "%d %d\n", y, x);
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

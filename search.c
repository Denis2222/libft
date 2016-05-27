/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 15:45:06 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 20:56:23 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#define MACRODEOUF filler->piece[py][px] == '.' && \
		check_map_case(filler, px + x, py + y) > 0 && \
		check_map_case(filler, px + x, py + y) != filler->player

#define
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
	int best[2];

	y = filler->map_y - 1;
	best[1] = -1;
	best[0] = -1;
	while (y >= 0)
	{
		x = filler->map_x -1;
		while (x >= 0)
		{
			if (pos_piece_valide(filler, x, y))
			{
				best[1] = y;
				best[0] = x;
				// ft_dprintf(1, "%d %d\n", y, x);
				// return (1);
			}
			if (pos_piece_valide(filler, x, y) == 2)
			{
				ft_dprintf(1, "%d %d\n", y, x);
				return (1);
			}
			x--;
		}
		y--;
	}
	if (best[1] >= 0)
	{
		ft_dprintf(1, "%d %d\n", best[1], best[0]);
		return (1);
	}
	return (0);
}

int		search_position(t_filler *filler)
{
	int	x;
	int	y;
	int best[2];


	if (filler->way % 2 == 1)
		return (search_position_down(filler));
	y = 0;
	best[1] = -1;
	best[0] = -1;
	while (y < filler->map_y)
	{
		x = 0;
		while (x < filler->map_x)
		{
			if (pos_piece_valide(filler, x, y))
			{
				best[1] = y;
				best[0] = x;
			}
			if (pos_piece_valide(filler, x, y) == 2)
			{
				ft_dprintf(1, "%d %d\n", y, x);
				return (1);
			}
			x++;
		}
		y++;
	}
	if (best[1] >= 0)
	{
		ft_dprintf(1, "%d %d\n", best[1], best[0]);
		return (1);
	}
	return (0);
}

int	pos_piece_valide(t_filler *filler, int x, int y)
{
	int touch;
	int	px;
	int	py;
	int enemy;

	enemy = 0;
	py = -1;
	touch = 0;
	while (++py < filler->piece_y && (px = -1))
		while (++px < filler->piece_x)
		{
			if (filler->piece[py][px] == '*')
			{
				if (check_map_case(filler, px + x, py + y) == filler->player)
					touch++;
				else if (check_map_case(filler, px + x, py + y) != 0)
					return (0);
			}
			else if (filler->piece[py][px] == '.' &&
				check_map_case(filler, px + x, py + y) == -1)
				return (0);
			if (MACRODEOUF)
				enemy++;
		}
	if (touch == 1 && enemy)
		return (2);
	return (touch == 1 ? 1 : 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 01:20:13 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 18:37:43 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	store_map(t_filler *filler, char *buffer, int y)
{
	filler->map[y] = ft_strncpy(filler->map[y], &buffer[4], filler->map_x);
	return (0);
}

int	store_piece(t_filler *filler, char *buffer, int y)
{
	filler->piece[y] = ft_strncpy(filler->piece[y], buffer, filler->piece_x);
	return (0);
}

int	pos_piece_valide(t_filler *filler, int x, int y)
{
	int touch;
	int	px;
	int	py;

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
		}
	return (touch == 1 ? 1 : 0);
}

int	gnl_check(t_filler *filler, char *buffer, int i)
{
	if (i == 0)
		if (!(filler->player = check_name(buffer)))
			return (0);
	if (i == 1)
		if (!check_map_size(buffer, filler))
			return (0);
	if (i > 2 && i < filler->map_y + 3)
		store_map(filler, buffer, i - 3);
	if (i == filler->map_y + 3)
		if (!check_piece_size(buffer, filler))
			return (0);
	if (i > filler->map_y + 3 && i < filler->map_y + 4 + filler->piece_y)
		store_piece(filler, buffer, i - (filler->map_y + 4));
	return (1);
}

int	main(void)
{
	char		*buffer;
	t_filler	*filler;
	int			i;

	filler = newfiller();
	i = 0;
	while (get_next_line_single(0, &buffer) > 0)
	{
		if (!gnl_check(filler, buffer, i))
			return (0);
		if (i == filler->map_y + 3 + filler->piece_y)
		{
			if (!search_position(filler))
				ft_dprintf(1, "0 0\n");
			i = 0;
			free_map(filler);
			free_piece(filler);
		}
		filler->way++;
		ft_strdel(&buffer);
		i++;
	}
	return (0);
}

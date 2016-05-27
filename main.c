/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 01:20:13 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 09:49:23 by dmoureu-         ###   ########.fr       */
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
	filler->map = NULL;
	filler->piece = NULL;
	return (filler);
}

int			check_name(char *buffer)
{
	if (strncmp(buffer, "$$$ exec p1", 11) == 0)
		return (1);
	else if (strncmp(buffer, "$$$ exec p2", 11) == 0)
		return (2);
	return (0);
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

int			check_map_size(char *buffer, t_filler *filler)
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
			return (1);
		}
	}
	return (0);
}

int			check_piece_size(char *buffer, t_filler *filler)
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
			return (1);
		}
	}
	return (0);
}

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

void	print_piece(t_filler *filler)
{
	int	i;

	i = 0;
	ft_dprintf(2, "\n{inv}################ piece w:%d h:%d#####################\n", filler->piece_x, filler->piece_y);
	while (filler->piece[i])
	{
		ft_dprintf(2, "%s\n", filler->piece[i]);
		i++;
	}
	ft_dprintf(2, "##########################################{eoc}\n");
}


void	print_map(t_filler *filler)
{
	int	i;

	i = 0;
	ft_dprintf(2, "\n################ map #####################\n");
	while (filler->map[i])
	{
		ft_dprintf(2, "%s\n", filler->map[i]);
		i++;
	}
	ft_dprintf(2, "##########################################\n");
}

int		check_map_case(t_filler *filler, int x, int y)
{
	if (x >= 0 && x < filler->map_x)
	{
		if (y >= 0 && y < filler->map_y)
		{
			//ft_dprintf(2,"{blue} val: x:%d y:%d[%c] {eoc}",x, y, filler->map[y][x]);
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

int		pos_piece_valide(t_filler *filler, int x, int y)
{
	int touch;
	int	px;
	int	py;

	py = 0;
	px = 0;
	touch = 0;
	while (py < filler->piece_y)
	{
		//ft_dprintf(2, "WTF!!!!!!!!!!!!");
		px = 0;
		while (px < filler->piece_x)
		{
			//ft_dprintf(2, "p[x:%d y:%d] ", px, py);
			if (filler->piece[py][px] == '*')
			{
				//print_piece(filler);
				//ft_dprintf(2, "\n{green} * check:(x:%d,y:%d) %d{eoc} \n", px + x, py + y,check_map_case(filler, px + x, py + y));
				if (check_map_case(filler, px + x, py + y) == filler->player)
				{
					//ft_dprintf(2," touch x:%d y:%d", px+x, py+y);
					touch++;
				}
				else if (check_map_case(filler, px + x, py + y) != 0)
				{
					//ft_dprintf(2, "{blink}error[y:%d x:%d] {eoc}\n", py + y, px + x);
					return (0);
				}
			}
			px++;
		}
		py++;
	}
	if (touch == 1)
	{
		usleep(5000);
		//ft_dprintf(2, "pos valide: x:%d y:%d\n", x, y);
		return (1);
	}
	return (0);
}

int		search_position(t_filler *filler)
{
	int	x;
	int	y;

	y = -1;
	while (y < filler->map_y)
	{
		x = -1;
		while (x < filler->map_x)
		{
			//ft_dprintf(2, "\n{red}check y:%d x:%d => %d{eoc}\n", y, x, pos_piece_valide(filler, x, y));
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

int	main(void)
{
	char		*buffer;
	t_filler	*filler;
	int			i;

	filler = newfiller();
	i = 0;
	while (get_next_line_single(0, &buffer) > 0)
	{
		//ft_dprintf(2, "#############[%s]{%d}\n", buffer, i);
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
		if (i == filler->map_y + 3 + filler->piece_y)
		{
			if (!search_position(filler))
				ft_dprintf(1, "0 0\n");
			i = 0;
		}
		ft_strdel(&buffer);
		i++;
	}
	//ft_dprintf(1, "3 15\n");
	return (0);
}

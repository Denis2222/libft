/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoureu- <dmoureu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/29 13:41:17 by dmoureu-          #+#    #+#             */
/*   Updated: 2016/05/27 16:53:01 by dmoureu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft/libft.h"

typedef struct	s_filler
{
	int			player;
	int			map_x;
	int			map_y;
	int			piece_x;
	int			piece_y;
	char		**map;
	char		**piece;
	int			way;
}				t_filler;

int				search_position(t_filler *filler);
t_filler		*newfiller(void);
char			**malloc_map(int x, int y);
void			free_map(t_filler *filler);
void			free_piece(t_filler *filler);
int				check_name(char *buffer);
int				check_map_case(t_filler *filler, int x, int y);
int				check_map_size(char *buffer, t_filler *filler);
int				check_piece_size(char *buffer, t_filler *filler);
int				pos_piece_valide(t_filler *filler, int x, int y);

#endif

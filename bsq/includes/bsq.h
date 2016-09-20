/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 21:34:53 by schoque           #+#    #+#             */
/*   Updated: 2016/08/30 21:34:54 by schoque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define IS_NUM(c) (c >= '0' && c <= '9')
# define IS_WHSPC(c) (c==' '||c=='\n'||c=='\t'|| c =='\v'|| c=='\f'||c =='\r')
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_map
{
	char			empty;
	char			obstacle;
	char			filler;
	int				length;
	int				width;
	int				bsq;
	int				bsq_x;
	int				bsq_y;
	char			**array;
	int				**rows;
	int				**cols;
}					t_map;

int					ft_atoi(char *str);
void				ft_putstr(char *str);
char				*ft_strcpy(char *dest, char *src);

int					get_info(char *file, t_map *map);
int					read_map(char *file, t_map *map);
int					malloc_arrays(t_map *map);
int					pre_check(t_map *map);
int					find_bsq(t_map *map);
void				free_arrays(t_map *map);
void				ft_putlist(char **list);

#endif

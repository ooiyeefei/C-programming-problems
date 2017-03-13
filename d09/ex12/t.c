#include "ft_door.h"

void	ft_putstr(char *str)
{
		int		i;
			char	c;

				i = 0;
					while (str[i])
							{
										c = str[i];
												write(1, &c, 1);
														i++;
															}
}

ft_bool	open_door(t_door *door)
{
		ft_putstr("Door opening...\n");
			door->state = OPEN;
				return (TRUE);
}

ft_bool	close_door(t_door *door)
{
		ft_putstr("Door closing...\n");
			door->state = CLOSE;
				return (TRUE);
}

ft_bool	is_door_open(t_door *door)
{
		ft_putstr("Door is open ?\n");
			door->state = OPEN;
				return (TRUE);
}

ft_bool	is_door_close(t_door *door)
{
		ft_putstr("Door is close ?\n");
			door->state = CLOSE;
				return (TRUE);
}

#include "ft_door.h"

void		ft_putstr(char *str)
{
		int i;

			i = 0;
				while (str[i])
						{
									write(1, &str[i], 1);
											i++;
												}
}

ft_bool		close_door(t_door *door)
{
		ft_putstr("Door closing...");
			t_door->state = CLOSE;
				return (TRUE);
}

ft_bool		is_door_open(t_door *door)
{
		ft_putstr("Door is open ?");
			t_door->state = OPEN;
				return (OPEN);
}

ft_bool 	is_door_close(t_door *door)
{
		ft_putstr("Door is close ?");
			t_door->state = CLOSE;
				return (CLOSE);
}


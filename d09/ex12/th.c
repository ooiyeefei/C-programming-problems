#ifndef FT_DOOR_H
# define FT_DOOR_H

typedef ft_bool int;

typedef	struct	s_door
{
		int		state;	
}				t_door

# define TRUE 1
# define OPEN 1
# define CLOSE 0

#endif


#include <unistd.h>

typedef int ft_bool;
#define TRUE 1
#define OPEN 1
#define CLOSE 0
#define EXIT_SUCCESS 0
typedef struct	s_door
{
		int	state;
}				t_door;
ft_bool	open_door(t_door *door);
ft_bool	close_door(t_door *door);
ft_bool	is_door_open(t_door *door);
ft_bool	is_door_close(t_door *door);

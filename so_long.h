#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

typedef struct s_all{
	int			col;
	int			win;
	int			time;
	int			swframe;
	int			movements;
	t_player	player;
	t_data		data;
	t_vars		vars;
	t_map		map;
	t_images	images;
}				t_all;

char	*get_next_line(int fd);
char	
#endif
#include "so_long.h"

void display(char *str)
{
    int i;
    i = ft_strlen(str);
    write(1, str, i);
}
int main(int argc, char *argv[])
{
        t_all	all;
    	int		i;
    	int		j;

    	
		all.col = 0;
		all.time = 0;
		all.swframe = 0;
		all.movements = 0;
	    if (argc != 2)
	    	display("wrong number of arguments");
		read_map(&all, argv);
//		all.vars.mlx = mlx_init();
//		ft_loadtilesimg(&all);
//		i = (all.map.y - 1) * 64;
//		j = (all.map.x - 2) * 64;
//		all.vars.win = mlx_new_window(all.vars.mlx, i, j, "so_long");
//		search_player_col(&all);
//		spawn_enemy(&all);
//		ft_printmap(&all);
//		mlx_hook(all.vars.win, ON_DESTROY, 0L, endwindow, &all);
//		mlx_key_hook(all.vars.win, key_detect, &all);
//		mlx_loop_hook(all.vars.mlx, ft_printmap, &all);
//		mlx_loop(all.vars.mlx);
}
//tengo que parsear los mapas ess decir ver si estan bien estructurados, si tienen tamaño cuadrado, etc.
//luego tengo que leerlo 

#ifndef SO_LONG_H
# define SO_LONG_H

/* Include */

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../mlx/mlx.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;
/*
typedef struct	s_vars {
	void	*mlx;
	void	*win;
	int		windowClose;
}				t_vars;
*/

int		main(int argc, char **argv);
int		ft_error_finder(int nb_params, const char *file_name);
size_t	ft_strlen(const char *str);
int		ft_check_extension(const char *file_name);
int		ft_check_file(const char *file_name);
int		ft_check_path_to_dir(const char *file_name);
void	ft_exit(const char *msg);
void	ft_my_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif

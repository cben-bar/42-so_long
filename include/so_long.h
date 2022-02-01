/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:20:18 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/01 19:12:41 by cben-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/* ****************************************************************************
-----------------------------------INCLUDES-----------------------------------
* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "../mlx/mlx.h"
# include "../libft/libft.h"

/* ****************************************************************************
---------------------------------KEY BINDINGS----------------------------------
* ************************************************************************** */

# define KEY_ESC 53
//# define KEY_UP 13
//# define KEY_DWN 1
//# define KEY_R 2
//#define KEY_L 0

/* ****************************************************************************
---------------------------------SPRITES PATH----------------------------------
* ************************************************************************** */

//# define WALL_PATH "./sprites/1_coral_100x100.xpm"
//# define EMPTY_PATH "./sprites/0_water_100x100.xpm"
# define P_PATH "./sprites/P_baby_100x100.xpm"
//# define EXIT_PATH "./sprites/E_swat_100x100.xpm"
//# define C_PATH "./sprites/C_axe_100x100.xpm"

/* ****************************************************************************
-------------------------------------ENUM-------------------------------------
* ************************************************************************** */

typedef enum	s_bool
{
	false,
	true
}				t_bool;

/* ****************************************************************************
------------------------------------STRUCTS------------------------------------
* ************************************************************************** */

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	char	**map_line;
	size_t	x_max;
	size_t	y_max;
}				t_data;

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
	int		windowClose;
	t_data	img;
}				t_vars;

/* ****************************************************************************
------------------------------PROTOTYPES PARSING------------------------------
* ************************************************************************** */

int		main(int argc, char **argv);
void	ft_error_finder(int nb_params, const char *file_name);
t_bool	ft_check_extension(const char *file_name);
t_bool	ft_check_file(const char *file_name);
t_bool	ft_check_path_to_dir(const char *file_name);
void	ft_error_exit(const char *msg);

/* ****************************************************************************
-------------------------------PROTOTYPES EVENTS-------------------------------
* ************************************************************************** */

int	ft_key_events(int keycode, t_vars vars);
int	ft_close_mouse(t_vars vars);

/* ****************************************************************************
-----------------------------PROTOTYPES CHECK MAP-----------------------------
* ************************************************************************** */
t_data	*ft_init_map(char **av);
t_data	*ft_map_filler(int fd, t_data *data);
size_t	ft_check_y_max(char **map_line);
void	ft_check_map(t_data *data);
t_bool	ft_check_map_intruder(t_data *data, const char *charset);
t_bool	ft_check_charset(char c, const char *charset);
t_bool	ft_check_map_everybody_is_here(t_data *data, const char *charset);
t_bool	ft_check_map_just_one_p(t_data *data);
t_bool	ft_check_map_border(t_data *data);
//t_bool	ft_check_map_rect(t_data *data);



/* ****************************************************************************
------------------------------PROTOTYPES DISPLAY------------------------------
* ************************************************************************** */

void	ft_my_mlx_pixel_put(t_data *data, int x, int y, int color);


/* ****************************************************************************
--------------------------------PROTOTYPES--------------------------------
* ************************************************************************** */





/* ****************************************************************************
--------------------------------PROTOTYPES--------------------------------
* ************************************************************************** */

#endif

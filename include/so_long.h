/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:20:18 by cben-bar          #+#    #+#             */
/*   Updated: 2022/02/09 12:31:48 by cben-bar         ###   ########lyon.fr   */
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
# include "../../mlx/mlx.h"
# include "../libft/libft.h"

/* ****************************************************************************
---------------------------------KEY BINDINGS----------------------------------
* ************************************************************************** */

# define KEY_ESC 53
# define KEY_UP 13
# define KEY_DWN 1
#define KEY_L 0
# define KEY_R 2

/* ****************************************************************************
---------------------------------SPRITES PATH----------------------------------
* ************************************************************************** */

# define WALL_PATH "./sprites/1_coral_100x100.xpm"
# define EMPTY_PATH "./sprites/0_water_100x100.xpm"
# define P_PATH "./sprites/P_baby_100x100.xpm"
# define EXIT_PATH "./sprites/E_schoolbus_100x100.xpm"
# define C_PATH "./sprites/C_axe_100x100.xpm"

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

typedef struct	s_image
{
	void	*pl;
	void	*wa;
	void	*em;
	void	*co;
	void	*ex;
}				t_image;

typedef struct s_data
{
	char	**map_line;
	void	*mlx;
	void	*win;
	t_image	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	size_t	x_max;
	size_t	y_max;
	size_t	c_max;
	size_t	c_counter;
	size_t	y;
	size_t	x;
	size_t	mv_counter;
}				t_data;

/* ****************************************************************************
----------------------------------DEFINE SIZE----------------------------------
* ************************************************************************** */

# define W 10
# define H 10

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

int		ft_close_key(void);
int		ft_close_mouse(t_data *data);
int		ft_key_events(int keycode, t_data *data);
void	ft_up(t_data **data);
void	ft_down(t_data **data);
void	ft_l(t_data **data);
void	ft_r(t_data **data);

/* ****************************************************************************
-------------------------PROTOTYPES CHECK & CLEAR MAP-------------------------
* ************************************************************************** */

t_data	*ft_init_map(char **av);
t_data	*ft_map_filler(int fd, t_data *data);
size_t	ft_check_y_max(char **map_line);
size_t	ft_check_c_max(t_data *data);
void	ft_check_map(t_data *data);
t_bool	ft_check_map_intruder(t_data *data, const char *charset);
t_bool	ft_check_charset(char c, const char *charset);
t_bool	ft_check_map_everybody_is_here(t_data *data, const char *charset);
t_bool	ft_check_map_just_one_p(t_data *data);
t_bool	ft_check_map_border(t_data *data);
void	ft_clear_leaks(t_data *data);

/* ****************************************************************************
------------------------------PROTOTYPES GRAPHIC------------------------------
* ************************************************************************** */

void	ft_init_win(void **mlx, void **win, t_data *data);
t_image	*ft_init_image(t_data *data);

/* ****************************************************************************
--------------------------------PROTOTYPES RUN--------------------------------
* ************************************************************************** */

void	ft_run(t_data *data, t_image *img);
void	ft_player_pos(t_data **data);
void	ft_push_img(t_data *data, t_image *img, void **mlx, void **win);

#endif

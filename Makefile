# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/12 17:00:45 by cben-bar          #+#    #+#              #
#    Updated: 2022/10/12 17:00:51 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	so_long

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

LIB_FLAG	=	-L mlx -l mlx libft/libft.a

MLX_FLAGS	=	-framework OpenGL -framework Appkit

HEADER		=	-I includes -I mlx -I libft

SRCS		=	./srcs/so_long.c									\
				./srcs/parsing/ft_check_extension.c					\
				./srcs/parsing/ft_error_finder.c					\
				./srcs/parsing/ft_check_file.c						\
				./srcs/parsing/ft_check_path_to_dir.c				\
				./srcs/parsing/ft_error_exit.c						\
				./srcs/events/ft_close_mouse.c						\
				./srcs/events/ft_close_key.c						\
				./srcs/check_map/ft_init_map.c						\
				./srcs/check_map/ft_check_y_max.c					\
				./srcs/check_map/ft_check_c_max.c					\
				./srcs/check_map/ft_map_filler.c					\
				./srcs/check_map/ft_check_map.c						\
				./srcs/check_map/ft_check_map_intruder.c			\
				./srcs/check_map/ft_check_charset.c					\
				./srcs/check_map/ft_check_map_everybody_is_here.c	\
				./srcs/check_map/ft_check_map_just_one_p.c			\
				./srcs/check_map/ft_check_map_border.c				\
				./srcs/check_map/ft_clear_leaks.c					\
				./srcs/graphic/ft_init_win.c						\
				./srcs/graphic/ft_init_image.c						\
				./srcs/run/ft_run.c									\
				./srcs/graphic/ft_push_img.c						\
				./srcs/run/ft_player_pos.c							\
				./srcs/events/ft_key_events.c						\
				./srcs/events/ft_move.c

OBJS		=	${SRCS:.c=.o}

.c.o	:
	${CC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJS) ./include/so_long.h ./mlx/mlx.h ./libft/libft.h
	make -C mlx
	make -C libft
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIB_FLAG) $(MLX_FLAGS)

all		:	$(NAME)

clean	: 
	make clean -C mlx
	make clean -C libft
	rm -rf $(OBJS)

fclean	:	clean
	make clean -C mlx
	make fclean -C libft
	rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

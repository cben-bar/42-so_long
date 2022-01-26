NAME		=	so_long

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

LIB_FLAG	=	-L mlx -l mlx

MLX_FLAGS	=	-framework OpenGL -framework Appkit

HEADER		=	-I includes -I mlx

SRCS		=	./srcs/so_long.c								\
				./srcs/utils/ft_strlen.c						\
				./srcs/parsing/ft_check_extension.c				\
				./srcs/parsing/ft_error_finder.c				\
				./srcs/parsing/ft_check_file.c					\
				./srcs/parsing/ft_check_path_to_dir.c			\
				./srcs/parsing/ft_exit.c						\
				./srcs/ft_my_mlx_pixel_put.c

OBJS		=	${SRCS:.c=.o}

BONUS_OBJS	=	${BONUS_SRCS:.c=.o}

.c.o	:
	${CC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJS)
	make -C mlx
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIB_FLAG) $(MLX_FLAGS)

all		:	$(NAME)

clean	: 
	make clean -C mlx
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean	:	clean
	make clean -C mlx
	rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

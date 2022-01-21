NAME		=	so_long

CC			=	gcc

FLAGS		=	-Wall -Wextra -Werror

LIB_FLAG	=	-L mlx -l mlx

MLX_FLAGS	=	-framework OpenGL -framework Appkit

HEADER		=	-I includes -I mlx

SRCS		=	./src/test.c

BONUS_SRCS	=	./src_bonus/*.c

OBJS		=	${SRCS:.c=.o}

BONUS_OBJS	=	${BONUS_SRCS:.c=.o}

.c.o	:
	${CC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJS)
	make -C mlx
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIB_FLAG) $(MLX_FLAGS)

bonus	:	$(BONUS_OBJS)
	make -C mlx
	$(CC) $(FLAGS) $(BONUS_OBJS) -o $(NAME) $(LIB_FLAG) $(MLX_FLAGS)

all		:	$(NAME)

clean	: 
	make clean -C mlx
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean	:	clean
	make clean -C mlx
	rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

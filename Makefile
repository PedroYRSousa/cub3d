LIBS_DIR				=	./libs
LIBFT_DIR				=	${LIBS_DIR}/libft
INC_DIR					=	-I${PROJECT_DIR}/includes -I${LIBFT_DIR}/includes

PROJECT_DIR				=	./project
	SRC_DIR				=	${PROJECT_DIR}/src
		CONTROLLER_DIR	=	${SRC_DIR}/controller
		ENGINE_DIR		=	${SRC_DIR}/engine
		GAME_DIR		=	${SRC_DIR}/game
		IMAGE_DIR		=	${SRC_DIR}/image
		RAYCAST_DIR		=	${SRC_DIR}/raycast
		SYSTEM_DIR		=	${SRC_DIR}/system
		VECTOR_DIR		=	${SRC_DIR}/vector
		VIEW_DIR		=	${SRC_DIR}/view

CONTROLLER_FILES		=													\
	${CONTROLLER_DIR}/controller_handle_exit.c								\
	${CONTROLLER_DIR}/controller_handle_key_press.c							\
	${CONTROLLER_DIR}/controller_init.c

ENGINE_FILES			=													\
	${ENGINE_DIR}/engine_destroy.c											\
	${ENGINE_DIR}/engine_init.c												\
	${ENGINE_DIR}/engine_instance.c

GAME_FILES				=													\
	${GAME_DIR}/game_check_map.c											\
	${GAME_DIR}/game_destroy.c												\
	${GAME_DIR}/game_init.c													\
	${GAME_DIR}/game_instance.c												\
	${GAME_DIR}/game_set_color.c											\
	${GAME_DIR}/game_set_map.c												\
	${GAME_DIR}/game_set_player.c											\
	${GAME_DIR}/game_set_texture.c											\
	${GAME_DIR}/game_get_color.c

IMAGE_FILES				=													\
	${IMAGE_DIR}/image_get_pixel.c											\
	${IMAGE_DIR}/image_init_empty.c											\
	${IMAGE_DIR}/image_init.c												\
	${IMAGE_DIR}/image_set_pixel.c

RAYCAST_FILES			=													\
	${RAYCAST_DIR}/raycast_calc__dda_line_size__hit_side__wall_map_pos.c	\
	${RAYCAST_DIR}/raycast_calc__dist_side___step.c							\
	${RAYCAST_DIR}/raycast_calc__perpendicular_dist__draw_start_end.c		\
	${RAYCAST_DIR}/raycast_calc__ray_dir__delta_dist__map_pos.c				\
	${RAYCAST_DIR}/raycast_calc__texture.c									\
	${RAYCAST_DIR}/raycast_instance.c										\
	${RAYCAST_DIR}/raycast.c

SYSTEM_FILES			=													\
	${SYSTEM_DIR}/system_error.c

VECTOR_FILES			=													\
	${VECTOR_DIR}/vector_add.c												\
	${VECTOR_DIR}/vector_copy.c												\
	${VECTOR_DIR}/vector_create.c											\
	${VECTOR_DIR}/vector_mult.c												\
	${VECTOR_DIR}/vector_rotate.c											\
	${VECTOR_DIR}/vector_sub.c

VIEW_FILES				=													\
	${VIEW_DIR}/view_destroy.c												\
	${VIEW_DIR}/view_draw.c													\
	${VIEW_DIR}/view_init.c													\
	${VIEW_DIR}/view_instance.c												\
	${VIEW_DIR}/view_put_background.c										\
	${VIEW_DIR}/view_put_raycast.c

SRC_FILES				=	${CONTROLLER_FILES} ${ENGINE_FILES} ${GAME_FILES} ${IMAGE_FILES} ${RAYCAST_FILES} ${SYSTEM_FILES} ${VECTOR_FILES} ${VIEW_FILES}	\
	${SRC_DIR}/main.c

#	Config compile

NAME			=	cub3D

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror -g ${INC_DIR}
LFLAGS			=	-Wall -Wextra -Werror -g -lmlx -lXext -lX11 -lm -L${LIBFT_DIR} -lft

SOURCES			=	${SRC_FILES}
OBJS			=	${SOURCES:.c=.o}

# Commands

all: libft ${NAME}

${NAME}: ${OBJS}
	@${CC} -o ${NAME} ${OBJS} ${LFLAGS}
	@echo "\n\033[0;32mDone !"
	@echo -n "\033[0m"

%.o: %.c
	@printf "\033[0;33mGenerating ${NAME} objects... %-33.33s\r" $@
	@$(CC) -c $< -o $@ $(CFLAGS)

clean:
	@rm -f ${OBJS}

fclean: clean
	@make fclean -s -C ${LIBFT_DIR}
	@rm -f ${NAME}

re: fclean all

libft:
	@make -s -C ${LIBFT_DIR}

.PHONY: all clean fclean re libft

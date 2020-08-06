# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/26 15:25:35 by lcarmelo          #+#    #+#              #
#    Updated: 2020/03/14 19:35:52 by lcarmelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUN_CONVERSION = \
        ft_atoi \
		ft_itoa \
		ft_lltoa \
		ft_uitoa_base \
		ft_ulltoa_base \
		ft_tolower \
		ft_toupper

FUN_MEMORY = \
        ft_memset \
        ft_bzero \
        ft_memcpy \
        ft_memccpy \
        ft_memmove \
        ft_memchr \
        ft_memalloc \
        ft_memdel \
		ft_memswap \
		ft_swap

FUN_STRINGS = \
        ft_strlen \
		ft_strchr \
		ft_strchri \
		ft_strjoin \
		ft_strcpy \
		ft_strncpy \
		ft_strdup \
		ft_strcat \
		ft_strncat \
		ft_strclr \
		ft_strcmp \
		ft_strncmp \
		ft_strequ \
		ft_striter \
		ft_strlcat \
		ft_strmap \
		ft_strmapi \
		ft_strnequ \
		ft_strnew \
		ft_strstr \
		ft_strnstr \
		ft_strsplit \
		ft_strsub \
		ft_strtrim

FUN_VECTOR = \
		vector_init \
		vector_copy \
		vector_move \
		vector_move_array \
		vector_move_back_array \
		vector_push_back_array \
		vector_move_back_data \
		vector_push_back_data \
		vector_push_front_data \
		vector_insert_data \
		vector_get_element \
		vector_set_element \
		vector_pop_back \
		vector_pop_front \
		vector_erase \
		vector_clear \
		vector_destroy \
		vector_is_empty \
		vector_is_initialized \
		vector_byte_size \
		vector_free_size \
		vector_byte_capacity \
		vector_resize \
		vector_reallocate \
		vector_offset \
		vector_chr \
		vector_memmove \
		vector_qsort

FUN_STACK = \
		stack_byte_size \
		stack_byte_capacity \
		stack_init \
		stack_destroy \
		stack_is_empty \
		stack_is_initialized \
		stack_move \
		stack_move_data \
		stack_move_array \
		stack_pop \
		stack_push \
		stack_top \
		stack_second \
		stack_get_element

FUN_MATH = \
		ft_max \
		ft_min \
		ft_random \
		ft_bpow \
		ft_abs

FUN_CTYPE = \
		ft_isprint \
        ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isalpha \
		ft_isescape \
		ft_isnumber

FUN_DISPLAY = \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putchar \
		ft_putendl \
		ft_putnbr \
		ft_putstr

FUN_GNL = \
		get_next_line

DIR_CONVERSION  = ./conversion/
DIR_MEMORY      = ./memory/
DIR_STRINGS     = ./strings/
DIR_VECTOR 		= ./vector/
DIR_STACK 		= ./stack/
DIR_MATH 		= ./math/
DIR_CTYPE 		= ./ctype/
DIR_DISP 		= ./display/
DIR_GNL 		= ./gnl/
DIR_INC   		= ./includes

SRC_CONVERSION  = $(addprefix $(DIR_CONVERSION), $(addsuffix .c, $(FUN_CONVERSION)))
SRC_STRINGS     = $(addprefix $(DIR_STRINGS), $(addsuffix .c, $(FUN_STRINGS)))
SRC_MEMORY      = $(addprefix $(DIR_MEMORY), $(addsuffix .c, $(FUN_MEMORY)))
SRC_VECTOR 		= $(addprefix $(DIR_VECTOR), $(addsuffix .c, $(FUN_VECTOR)))
SRC_STACK 		= $(addprefix $(DIR_STACK), $(addsuffix .c, $(FUN_STACK)))
SRC_DIPLAY		= $(addprefix $(DIR_DISP), $(addsuffix .c, $(FUN_DISPLAY)))
SRC_CTYPE 		= $(addprefix $(DIR_CTYPE), $(addsuffix .c, $(FUN_CTYPE)))
SRC_MATH 		= $(addprefix $(DIR_MATH), $(addsuffix .c, $(FUN_MATH)))
SRC_GNL 		= $(addprefix $(DIR_GNL), $(addsuffix .c, $(FUN_GNL)))

SRC_ALL         = $(SRC_CONVERSION) $(SRC_MEMORY) $(SRC_STRINGS) $(SRC_VECTOR) $(SRC_STACK) $(SRC_MATH) $(SRC_CTYPE) $(SRC_DIPLAY) $(SRC_GNL)
OBJ_ALL         = $(addsuffix .o, $(FUN_CONVERSION) $(FUN_MEMORY) $(FUN_STRINGS) $(FUN_VECTOR) $(FUN_STACK) $(FUN_MATH) $(FUN_CTYPE) $(FUN_DISPLAY) $(FUN_GNL))

CC              = gcc
NAME            = libft.a
#CFLAGS          = -Wall -Werror -Wextra -O2 -I$(DIR_INC)
CFLAGS          = -g -O2 -I$(DIR_INC)

all: $(NAME)

$(OBJ_ALL):
	@$(CC) -c $(CFLAGS) $(SRC_ALL) 

$(NAME): $(OBJ_ALL)
	@ar rc $(NAME) $?
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ_ALL)

fclean: clean
	@rm -f $(NAME)

re: fclean all

compile: re
	$(CC) main.c $(NAME) -I$(DIR_INC) 


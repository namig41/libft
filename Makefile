# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/27 15:54:57 by lcarmelo          #+#    #+#              #
#    Updated: 2020/02/20 21:10:07 by lcarmelo         ###   ########.fr        #
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
		ft_strsave \
		ft_strsplit \
		ft_strsub \
		ft_strtrim

FUN_VECTOR = \
		vector_init \
		vector_copy \
		vector_move \
		vector_move_data \
		vector_move_back_data \
		vector_push_data \
		vector_push_back \
		vector_push_front \
		vector_insert \
		vector_get_element \
		vector_pop_back \
		vector_pop_front \
		vector_erase \
		vector_clear \
		vector_destroy \
		vector_is_empty \
		vector_byte_size \
		vector_free_size \
		vector_resize \
		vector_reallocate \
		vector_offset 

FUN_MATH = \
		ft_max \
		ft_min \
		ft_random

FUN_CTYPE = \
		ft_isprint \
        ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isalpha

FUN_DISPLAY = \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putchar \
		ft_putendl \
		ft_putnbr \
		ft_putstr

DIR_CONVERSION  = ./conversion/
DIR_MEMORY      = ./memory/
DIR_STRINGS     = ./strings/
DIR_VECTOR 		= ./vector/
DIR_MATH 		= ./math/
DIR_CTYPE 		= ./ctype/
DIR_DISP 		= ./display/
DIR_INC   		= ./includes

SRC_CONVERSION  = $(addprefix $(DIR_CONVERSION), $(addsuffix .c, $(FUN_CONVERSION)))
SRC_STRINGS     = $(addprefix $(DIR_STRINGS), $(addsuffix .c, $(FUN_STRINGS)))
SRC_MEMORY      = $(addprefix $(DIR_MEMORY), $(addsuffix .c, $(FUN_MEMORY)))
SRC_VECTOR 		= $(addprefix $(DIR_VECTOR), $(addsuffix .c, $(FUN_VECTOR)))
SRC_DIPLAY		= $(addprefix $(DIR_DISP), $(addsuffix .c, $(FUN_DISPLAY)))
SRC_CTYPE 		= $(addprefix $(DIR_CTYPE), $(addsuffix .c, $(FUN_CTYPE)))
SRC_MATH 		= $(addprefix $(DIR_MATH), $(addsuffix .c, $(FUN_MATH)))

SRC_ALL         = $(SRC_CONVERSION) $(SRC_MEMORY) $(SRC_STRINGS) $(SRC_VECTOR) $(SRC_MATH) $(SRC_CTYPE) $(SRC_DIPLAY)
OBJ_ALL         = $(addsuffix .o, $(FUN_CONVERSION) $(FUN_MEMORY) $(FUN_STRINGS) $(FUN_VECTOR) $(FUN_MATH) $(FUN_CTYPE) $(FUN_DISPLAY))

CC              = gcc
NAME            = libft.a
CFLAGS          = -Wall -Werror -Wextra -O2 -I$(DIR_INC)

all: $(NAME)

$(OBJ_ALL):
	$(CC) -c $(CFLAGS) $(SRC_ALL) 

$(NAME): $(OBJ_ALL)
	@ar rc $(NAME) $?
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ_ALL)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/27 15:54:57 by lcarmelo          #+#    #+#              #
#    Updated: 2019/09/27 15:55:04 by lcarmelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FUNCS_1 = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memcmp \
		ft_memchr \
		ft_strlen \
		ft_strdup \
		ft_strcpy \
		ft_strncpy \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strstr \
		ft_strnstr \
		ft_strcmp \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower


FUNCS_2 = \
        ft_memalloc \
		ft_memdel \
		ft_strnew \
		ft_strdel \
		ft_striter \
		ft_striteri \
		ft_strmap \
		ft_strmapi \
		ft_strequ \
		ft_strnequ \
		ft_strsub \
		ft_strjoin \
		ft_strtrim \
		ft_strsplit \
		ft_itoa \
		ft_putchar \
		ft_putnbr \
		ft_putstr \
		ft_putendl \
		ft_putchar_fd \
		ft_putnbr_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_strclr
FUNCS_3	= \
        ft_lstnew \
        ft_lstdelone \
        ft_lstdel \
        ft_lstiter \
        ft_lstmap \
        ft_lstadd
MY_FUNCS = \
		ft_max \
		ft_min \
		ft_random \
		ft_strsave \


ALL_FUNCS = $(FUNCS_1) $(FUNCS_2) $(FUNCS_3) $(MY_FUNCS)
NAME = libft.a
SRC = $(addprefix $(SRC_PATH), $(addsuffix .c, $(ALL_FUNCS)))
OBJS = $(addsuffix .o, $(ALL_FUNCS))
SRC_PATH = ./
INCLUDE_PATH = ./
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_PATH)

all: $(NAME)

$(OBJS): %.o: %.c
	gcc -c $(CFLAGS) $^

$(NAME): $(OBJS)
	ar rc $(NAME) $?
	ranlib $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
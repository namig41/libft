cmake_minimum_required(VERSION 3.1...3.10)

project(libft
		LANGUAGES C)

add_definitions(-Wall -Werror -Wextra)

add_library(libft STATIC
			conversion/ft_atoi.c
			conversion/ft_lltoa.c
			conversion/ft_tolower.c
			conversion/ft_toupper.c
			conversion/ft_itoa.c
			conversion/ft_uitoa_base.c
			conversion/ft_ulltoa_base.c

			ctype/ft_isalnum.c
			ctype/ft_isalpha.c
			ctype/ft_isascii.c
			ctype/ft_isdigit.c
			ctype/ft_isescape.c
			ctype/ft_isprint.c

			display/ft_putchar.c
			display/ft_putchar_fd.c
			display/ft_putendl.c
			display/ft_putendl_fd.c
			display/ft_putnbr.c
			display/ft_putnbr_fd.c
			display/ft_putstr.c
			display/ft_putstr_fd.c

			gnl/get_next_line.c

			math/ft_abs.c
			math/ft_bpow.c
			math/ft_max.c
			math/ft_min.c
			math/ft_random.c

            memory/ft_bzero.c
            memory/ft_memset.c
			memory/ft_memalloc.c
			memory/ft_memccpy.c
			memory/ft_memchr.c
			memory/ft_memcmp.c
			memory/ft_memcpy.c
			memory/ft_memdel.c
			memory/ft_memmove.c
			memory/ft_memswap.c
			memory/ft_swap.c

			strings/ft_strcat.c
			strings/ft_strchr.c
			strings/ft_strchri.c
			strings/ft_strclr.c
			strings/ft_strcmp.c
			strings/ft_strcpy.c
			strings/ft_strdup.c
			strings/ft_strequ.c
			strings/ft_striter.c
			strings/ft_striteri.c
			strings/ft_strjoin.c
			strings/ft_strlcat.c
			strings/ft_strlen.c
			strings/ft_strmap.c
			strings/ft_strmapi.c
			strings/ft_strncat.c
			strings/ft_strncmp.c
			strings/ft_strncpy.c
			strings/ft_strnequ.c
			strings/ft_strnew.c
			strings/ft_strnstr.c
			strings/ft_strrchr.c
			strings/ft_strsplit.c
			strings/ft_strstr.c
			strings/ft_strsub.c
			strings/ft_strtrim.c

			vector/vector_byte_capacity.c
			vector/vector_byte_size.c
			vector/vector_chr.c
			vector/vector_clear.c
			vector/vector_copy.c
			vector/vector_destroy.c
			vector/vector_erase.c
			vector/vector_free_size.c
			vector/vector_get_element.c
			vector/vector_init.c
			vector/vector_insert_data.c
			vector/vector_is_empty.c
			vector/vector_is_initialized.c
			vector/vector_memmove.c
			vector/vector_move_array.c
			vector/vector_move_back_array.c
			vector/vector_move_back_data.c
			vector/vector_move.c
			vector/vector_offset.c
			vector/vector_pop_back.c
			vector/vector_pop_front.c
			vector/vector_push_back_array.c
			vector/vector_push_back_data.c
			vector/vector_qsort.c
			vector/vector_reallocate.c
			vector/vector_resize.c
			vector/vector_set_element.c

			stack/stack_byte_capacity.c
			stack/stack_byte_size.c
			stack/stack_destroy.c
			stack/stack_get_element.c
			stack/stack_init.c
			stack/stack_is_empty.c
			stack/stack_is_initialized.c
			stack/stack_move_array.c
			stack/stack_move.c
			stack/stack_move_data.c
			stack/stack_pop.c
			stack/stack_push.c
			stack/stack_second.c
			stack/stack_top.c)


include_directories("includes/")
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:23:50 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:33:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include "libft.h"

/*
** --------------------------- DEFINITIONS  --------------------------
*/

# define VECTOR_MIN_CAPACITY        4
# define VECTOR_SUCCESS             1
# define VECTOR_ERROR               0

# define VECTOR_SPEED 	            2

# if VECTOR_SPEED <= 0
#  error "BUFF_SIZE has wrong size"
# endif

/*
** --------------------------- ORIENTATION OFFSET -------------------
*/

# define OFFSET_NO                  0
# define OFFSET_LEFT                1
# define OFFSET_RIGHT               2

/*
** --------------------------- STRUCTURE ---------------------------
*/

typedef struct	s_vector {
	void		*data;
	size_t		size;
	size_t		capacity;
	size_t		element_size;
}				t_vector;

/*
** --------------------------- FUNCTIONS --------------------------
** --------------------------- CONSTRUCTOR -----------------------
*/

int				vector_init(t_vector *vector, size_t capacity,
									size_t element_size);
int				vector_copy(t_vector *dst, const t_vector *src);

/*
** --------------------------- MOVE -----------------------------
*/

int				vector_swap(t_vector *dst, t_vector *src);
int				vector_move(t_vector *dst, t_vector *src);
int				vector_move_back_data(t_vector *vector, void **data);
int				vector_move_array(t_vector *vector, void **ar, size_t size);
int				vector_move_back_array(t_vector *vector, void **ar,
										size_t size);
int				vector_memmove(t_vector *vector, void *ptr, size_t len);

/*
** --------------------------- INSERTION -----------------------
*/

int				vector_push_back_data(t_vector *vector, void *element);
int				vector_push_back_array(t_vector *vector, void *data,
										size_t size);
int				vector_push_front_data(t_vector *vector, void *element);
int				vector_insert_data(t_vector *vector, size_t index,
										void *element);

/*
** --------------------------- GET ELEMENT --------------------
*/

void			*vector_get_element(t_vector *element, size_t index);
void			*vector_chr(t_vector *vector, size_t offset, int c);

/*
** --------------------------- SET ELEMENT -------------------
*/

int				vector_set_element(t_vector *element, void *data, size_t index);

/*
** --------------------------- DELETION ---------------------
*/

void			*vector_pop_back(t_vector *vector);
void			*vector_pop_front(t_vector *vector);
int				vector_erase(t_vector *vector, size_t index);
int				vector_clear(t_vector *vector);
int				vector_destroy(t_vector *vector);

/*
** --------------------------- INFORMATION -----------------
*/

int				vector_is_empty(const t_vector *vector);
int				vector_is_initialized(const t_vector *vector);
size_t			vector_byte_size(const t_vector *vector);
size_t			vector_free_size(const t_vector *vector);
size_t			vector_byte_capacity(const t_vector *vector);

/*
** --------------------------- MEMORY ---------------------
*/

int				vector_resize(t_vector *vector, size_t new_size);
int				vector_reallocate(t_vector *vector);

/*
** --------------------------- PRIVATE -------------------
*/

void			vector_offset(t_vector *vector, size_t index,
								void *element, t_uc offset_flag);
/*
** --------------------------- ALGORITHM ----------------
*/

int				vector_qsort(t_vector *vector);

#endif

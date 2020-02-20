/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reallocate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:38:31 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 19:01:08 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

static size_t		vector_int_capacity(size_t size, size_t speed)
{
	return (size << speed);
}

int					vector_reallocate(t_vector *vector)
{
	t_vector old;

	if (!vector)
		return (VECTOR_ERROR);
	if (!vector_init(&old, vector_int_capacity(vector->capacity,
							VECTOR_SPEED), vector->element_size))
		return (VECTOR_ERROR);
	old.size = vector->size;
	old.element_size = vector->element_size;
	ft_memcpy(old.data, vector->data, vector_byte_size(vector));
	if (!vector_move(vector, &old))
		return (VECTOR_ERROR);
	return (VECTOR_SUCCESS);
}

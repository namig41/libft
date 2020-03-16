/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reallocate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:38:31 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:54:38 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline static size_t	increase_capacity(size_t size, size_t speed)
{
	return (size << speed);
}

int						vector_reallocate(t_vector *vector)
{
	void *data;

	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	vector->capacity = increase_capacity(vector->capacity, VECTOR_SPEED);
	if (!(data = malloc(vector_byte_capacity(vector))) &&
			vector_destroy(vector))
		return (VECTOR_ERROR);
	if (!ft_memcpy(data, vector->data, vector_byte_size(vector)))
		return (VECTOR_ERROR);
	ft_memdel(&vector->data);
	vector->data = data;
	return (VECTOR_SUCCESS);
}

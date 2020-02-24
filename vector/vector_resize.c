/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:21:08 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:47:43 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_resize(t_vector *vector, size_t new_size)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	if (vector->size < new_size && vector->capacity < new_size)
	{
		vector->size = new_size;
		vector->capacity = new_size;
		if (!vector_reallocate(vector))
			return (VECTOR_ERROR);
	}
	if (vector->size > new_size)
		vector->size = new_size;
	return (VECTOR_SUCCESS);
}

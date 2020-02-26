/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_front_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:29:22 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/26 18:32:45 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_push_front_data(t_vector *vector, void *data)
{
	if (!vector_is_initialized(vector) || !data)
		return (VECTOR_ERROR);
	if (vector->size == vector->capacity && !vector_reallocate(vector))
		return (VECTOR_ERROR);
	ft_vector_offset(vector, 0, data, OFFSET_RIGHT);
	vector->size++;
	return (VECTOR_SUCCESS);
}

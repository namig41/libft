/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:38:06 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/29 17:19:41 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_push_back_data(t_vector *vector, void *data)
{
	if (!vector_is_initialized(vector) || !data)
		return (VECTOR_ERROR);
	if (vector->size == vector->capacity && !vector_reallocate(vector))
		return (VECTOR_ERROR);
	vector_offset(vector, vector->size, data, OFFSET_NO);
	vector->size++;
	return (VECTOR_SUCCESS);
}

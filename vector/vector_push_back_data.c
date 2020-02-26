/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:38:06 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/26 19:00:21 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_push_back_data(t_vector *vector, void *element)
{
	if (!vector_is_initialized(vector) || !element)
		return (VECTOR_ERROR);
	if (vector->size == vector->capacity && !vector_reallocate(vector))
		return (VECTOR_ERROR);
	ft_vector_offset(vector, vector->size, element, OFFSET_NO);
	vector->size++;
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:38:16 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 16:02:12 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_push_front(t_vector *vector, void *element)
{
	if (!vector || !element)
		return (VECTOR_ERROR);
	if (vector->size == vector->capacity && !vector_reallocate(vector))
		return (VECTOR_ERROR);
	ft_vector_offset(vector, 0, element, OFFSET_RIGHT);
	vector->size++;
	return (VECTOR_SUCCESS);
}

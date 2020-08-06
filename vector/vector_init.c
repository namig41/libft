/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 17:16:05 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:41:23 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_init(t_vector *vector, size_t capacity, size_t element_size)
{
	if (!vector->data)
	{
		vector->size = 0;
		vector->capacity = ft_max(VECTOR_MIN_CAPACITY, capacity);
		vector->element_size = element_size;
		if (!(vector->data = malloc(vector_byte_capacity(vector))))
			return (VECTOR_ERROR);
	}
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:21 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:33:05 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_copy(t_vector *dst, const t_vector *src)
{
	if (!dst || !src)
		return (VECTOR_ERROR);
	dst->size = src->size;
	dst->capacity = src->capacity;
	dst->element_size = src->element_size;
	ft_memdel(&dst->data);
	if (!(dst->data = malloc(vector_capacity_size(src))))
		return (VECTOR_ERROR);
	ft_memcpy(dst->data, src->data, vector_byte_size(dst));
	return (VECTOR_SUCCESS);
}

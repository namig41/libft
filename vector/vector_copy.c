/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:21 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/27 17:26:56 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_copy(t_vector *dst, const t_vector *src)
{
	if (!dst || !src)
		return (VECTOR_ERROR);
	if (src->size < dst->capacity) 
	{
		//vector_clear(dst);
		ft_memcpy(dst->data, src->data, vector_byte_size(dst));
	}
	else
	{
		ft_memdel(&dst->data);
		if (!(dst->data = malloc(vector_byte_capacity(src))))
			return (VECTOR_ERROR);
		ft_memcpy(dst->data, src->data, vector_byte_size(dst));
		dst->capacity = src->capacity;
	}
	dst->size = src->size;
	dst->element_size = src->element_size;
	return (VECTOR_SUCCESS);
}

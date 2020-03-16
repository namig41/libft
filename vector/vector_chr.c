/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_chr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 10:39:09 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:39:58 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void			*vector_chr(t_vector *vector, size_t offset, int c)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	return (ft_memchr(vector->data + offset * vector->element_size, c,
					vector_byte_size(vector)));
}

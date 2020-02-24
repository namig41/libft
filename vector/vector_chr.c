
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_byte_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:05 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:31:02 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void 			*vector_chr(t_vector *vector, size_t offset, int c)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	return (ft_memchr(vector->data + offset * vector->element_size, c,
					vector_byte_size(vector)));
}

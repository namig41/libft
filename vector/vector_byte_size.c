/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_byte_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:05 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/27 17:20:50 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline size_t		vector_byte_size(const t_vector *vector)
{
	return ((vector) ? (vector->size * vector->element_size) : VECTOR_ERROR);
}

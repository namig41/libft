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

inline size_t vector_capacity_size(const t_vector *vector)
{
	return ((vector) ? vector->capacity * vector->byte_size : VECTOR_ERROR);
}


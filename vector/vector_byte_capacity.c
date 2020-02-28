/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_byte_capacity.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:24:24 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/28 17:19:32 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline size_t vector_byte_capacity(const t_vector *vector)
{
	return ((vector) ? vector->capacity * vector->element_size : VECTOR_ERROR);
}


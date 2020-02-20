/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_free_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:40:16 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:36:03 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

size_t	vector_free_size(const t_vector *vector)
{
	return ((vector) ? (vector->capacity - vector->size)
						* vector->element_size : 0);
}

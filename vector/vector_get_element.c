/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get_element.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:40:43 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:40:55 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline void	*vector_get_element(t_vector *vector, size_t index)
{
	if (!vector_is_initialized(vector) || vector->size <= index)
		return (VECTOR_ERROR);
	return (vector->data + (index * vector->element_size));
}

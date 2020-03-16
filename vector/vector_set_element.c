/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get_element.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:40:43 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:55:29 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline int	vector_set_element(t_vector *vector, void *data, size_t index)
{
	if (!vector_is_initialized(vector) || vector->size <= index || !data)
		return (VECTOR_ERROR);
	ft_memcpy(vector->data + (index * vector->element_size),
			data, vector->element_size);
	return (VECTOR_SUCCESS);
}

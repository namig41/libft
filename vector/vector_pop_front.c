/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:46:57 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:48:19 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void		*vector_pop_front(t_vector *vector)
{
	void	*data;

	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	if (!(data = malloc(vector->element_size)))
		return (VECTOR_ERROR);
	ft_memcpy(data, vector->data, vector->element_size);
	ft_vector_offset(vector, 0, NULL, OFFSET_LEFT);
	vector->size--;
	return (data);
}

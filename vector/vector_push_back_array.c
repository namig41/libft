/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:34:00 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:45:03 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_push_back_array(t_vector *vector, void *ar, size_t size)
{
	size_t i;

	if (!vector_is_initialized(vector) || !ar)
		return (VECTOR_ERROR);
	i = 0;
	while (i < size)
	{
		if (!vector_push_back_data(vector, ar + i * vector->element_size))
			return (VECTOR_ERROR);
		i++;
	}
	return (VECTOR_SUCCESS);
}

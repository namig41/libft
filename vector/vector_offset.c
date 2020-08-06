/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_offset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:36:57 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:51:53 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline static void	*calc_offset(t_vector *vector, size_t index)
{
	return (vector->data + (vector->element_size * index));
}

void				vector_offset(t_vector *vector, size_t index,
										void *element, t_uc offset_flag)
{
	if (offset_flag == OFFSET_NO)
		ft_memcpy(calc_offset(vector, index), element,
					vector->element_size);
	else if (offset_flag == OFFSET_RIGHT)
	{
		ft_memmove(calc_offset(vector, index + 1),
			calc_offset(vector, index),
				vector->element_size * (vector->size - index));
		ft_memcpy(calc_offset(vector, index), element, vector->element_size);
	}
	else if (offset_flag == OFFSET_LEFT)
		ft_memmove(calc_offset(vector, index),
			calc_offset(vector, index + 1),
					vector->element_size * (vector->size - index));
}

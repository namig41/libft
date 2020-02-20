/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:46:57 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 16:01:27 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	*vector_pop_front(t_vector *vector)
{
	void *element;

	if (!vector)
		return (NULL);
	element = vector->data;
	ft_vector_offset(vector, 0, NULL, OFFSET_LEFT);
	vector->size--;
	return (element);
}

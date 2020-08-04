/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_is_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:11:55 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/04 17:11:56 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int			vector_is_sorted(t_vector *vector)
{
	size_t	i;
	size_t	max_i;

	if (vector->size < 2)
		return (-1);
	i = 0;
	max_i = vector_get_maxi(vector);
	while (i < vector->size - 1)
	{
		if (*(t_ll *)vector_get_element(vector, (max_i + i) % vector->size) <
			*(t_ll *)vector_get_element(vector, (max_i + i + 1) % vector->size))
			return (-1);
		i++;
	}
	return (max_i);
}

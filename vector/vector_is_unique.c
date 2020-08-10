/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_is_unique.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:05:34 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/04 17:05:37 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int			vector_is_unique(t_vector *vector)
{
	size_t	i;

	if (!vector)
		return (VECTOR_ERROR);
	i = 0;
	while (i < vector->size - 1)
	{
		if (*(int *)vector_get_element(vector, i) ==
				*(int *)vector_get_element(vector, i + 1))
			return (0);
		i++;
	}
	return (1);
}

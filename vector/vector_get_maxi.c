/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get_maxi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 16:58:51 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/04 16:58:59 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

size_t		vector_get_maxi(t_vector *vector)
{
	int		max;
	int		tmp;
	size_t	i;
	size_t	max_i;

	i = 0;
	max = INT_MIN;
	max_i = 0;
	while (i < vector->size)
	{
		tmp = *(int *)vector_get_element(vector, i);
		if (max <= tmp)
		{
			max = tmp;
			max_i = i;
		}
		i++;
	}
	return (max_i);
}

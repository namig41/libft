/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_front_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:29:22 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:39:01 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_ll	g_pivot;

static void	ft_qsort(t_vector *vector, size_t l, size_t r)
{
	size_t	l_hold;
	size_t	r_hold;

	l_hold = l;
	r_hold = r;
	g_pivot = *(int *)vector_get_element(vector, l);
	while (l < r)
	{
		while ((*(int *)vector_get_element(vector, r) >= g_pivot) && (l < r))
			r--;
		if (l != r)
			vector_set_element(vector, vector_get_element(vector, r), l++);
		while ((*(int *)vector_get_element(vector, l) <= g_pivot) && (l < r))
			l++;
		if (l != r)
			vector_set_element(vector, vector_get_element(vector, l), r--);
	}
	vector_set_element(vector, (void *)&g_pivot, l);
	g_pivot = l;
	l = l_hold;
	r = r_hold;
	if (l < g_pivot)
		ft_qsort(vector, l, g_pivot - 1);
	if (r > g_pivot)
		ft_qsort(vector, g_pivot + 1, r);
}

int			vector_qsort(t_vector *vector)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	ft_qsort(vector, 0, vector->size - 1);
	return (VECTOR_SUCCESS);
}

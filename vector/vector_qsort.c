/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push_front_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:29:22 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/26 18:32:45 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

static void ft_qsort(t_vector *vector, size_t left, size_t right)
{
	t_ll pivot;
	size_t l_hold;
	size_t r_hold;

	l_hold = left;
	r_hold = right;
	pivot = *(int *)vector_get_element(vector, left);
	while (left < right)
	{
		while ((*(int *)vector_get_element(vector, right) >= pivot) && (left < right))
			right--;
		if (left != right)
		{
			vector_set_element(vector, vector_get_element(vector, right), left);
		  	left++;
		}
		while ((*(int *)vector_get_element(vector, left) <= pivot) && (left < right))
		  	left++;
		if (left != right)
		{
			vector_set_element(vector, vector_get_element(vector, left), right);
		  	right--;
		}
	}
	vector_set_element(vector, (void *)&pivot, left);
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)
		ft_qsort(vector, left, pivot - 1);
	if (right > pivot)
		ft_qsort(vector, pivot + 1, right);
}

int 	vector_qsort(t_vector *vector)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	ft_qsort(vector, 0, vector->size - 1);
	return (VECTOR_SUCCESS);
}

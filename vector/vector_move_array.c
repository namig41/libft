/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:26:51 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 10:46:55 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	vector_move_array(t_vector *vector, void **ar, size_t size)
{
	if (!vector_is_initialized(vector) || !ar || !*ar)
		return (VECTOR_ERROR);
	if (!vector_destroy(vector) && !vector_move_back_array(vector, *ar, size))
		return (VECTOR_ERROR);
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_erase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:07:15 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 16:01:53 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_erase(t_vector *vector, size_t index)
{
	if (!vector && vector->size < index)
		return (VECTOR_ERROR);
	vector_offset(vector, index, 0, OFFSET_LEFT);
	vector->size--;
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:52 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:41:19 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int vector_memmove(t_vector *vector, void *ptr, size_t len)
{
	if (!vector_is_initialized(vector) || !ptr)
		return (VECTOR_ERROR);
	ft_memmove(vector->data, ptr, len);
	vector->size = len;
	return (VECTOR_SUCCESS);
}


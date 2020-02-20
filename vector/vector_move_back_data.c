/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move_back_data.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:58:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:39:49 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_move_back_data(t_vector *vector, void **data, size_t size)
{
	if (!vector_push_data(vector, *data, size))
		return (VECTOR_ERROR);
	ft_memdel(data);
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move_back_data.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:58:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/28 18:26:30 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_move_back_array(t_vector *vector, void **ar, size_t size)
{
	if (!vector_push_back_array(vector, *ar, size))
		return (VECTOR_ERROR);
	ft_memdel(ar);
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:13:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/28 18:36:13 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_move_back_data(t_vector *vector, void **data)
{
	if (!vector_is_initialized(vector) || data || !*data)
		return (VECTOR_ERROR);
	vector_push_back_data(vector, *data);
	ft_memdel(data);
	return (VECTOR_SUCCESS);
}

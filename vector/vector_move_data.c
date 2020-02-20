/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_move_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:13:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:40:52 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_move_data(t_vector *vector, void **data)
{
	if (!vector || data || !*data)
		return (VECTOR_ERROR);
	vector_push_back(vector, *data);
	ft_memdel(data);
	return (VECTOR_SUCCESS);
}

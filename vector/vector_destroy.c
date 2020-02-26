/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:29 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/26 15:24:11 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_destroy(t_vector *vector)
{
	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
	ft_memdel(&vector->data);
	return (VECTOR_SUCCESS);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:37:29 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 15:33:37 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int		vector_destroy(t_vector *vector)
{
	if (!vector)
		return (VECTOR_ERROR);
	ft_memdel(&vector->data);
	return (VECTOR_SUCCESS);
}

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

int		vector_move(t_vector *dst, t_vector *src)
{
	if (!src || !vector_destroy(dst))
		return (VECTOR_ERROR);
	*dst = *src;
	src->data = 0;
	return (VECTOR_SUCCESS);
}

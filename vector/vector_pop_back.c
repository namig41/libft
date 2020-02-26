/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:33:11 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/26 18:37:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	*vector_pop_back(t_vector *vector)
{
    void *data;

	if (!vector_is_initialized(vector))
		return (VECTOR_ERROR);
    if (!(data = malloc(vector->element_size)))
        return (VECTOR_ERROR);
	return (ft_memcpy(data, vector_get_element(vector, --vector->size), vector->element_size));
}

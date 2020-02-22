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

int     vector_move_array(t_vector *vector, void **ar, size_t size)
{
    if (!vector || !ar || !*ar)
        return (VECTOR_ERROR);
    if (!vector_destroy(vector) && !vector_move_back_array(vector, *ar, size))
        return (VECTOR_ERROR);
    return (VECTOR_SUCCESS);
}

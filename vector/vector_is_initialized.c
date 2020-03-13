/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_is_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:16:07 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/13 19:04:53 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

inline int 	vector_is_initialized(const t_vector *vector)
{ 
    return (vector && vector->data);
    //return (vector ? VECTOR_SUCCESS : VECTOR_ERROR);
}

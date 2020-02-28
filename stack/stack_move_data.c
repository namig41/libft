/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:57:28 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/28 18:26:17 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline int stack_move_data(t_stack *stack, void **data)
{
	return (vector_move_back_data(stack, data));
}

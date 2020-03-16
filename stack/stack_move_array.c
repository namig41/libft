/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:58:00 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:24:34 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline int	stack_move_array(t_stack *stack, void **ar, size_t size)
{
	return (vector_move_back_array(stack, ar, size));
}

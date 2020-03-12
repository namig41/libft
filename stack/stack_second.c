/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:01:39 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/12 19:40:16 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stack.h"

inline void *stack_second(t_stack *stack)
{
	if (stack->size < 2)
		return (NULL);
    return (vector_get_element(stack, stack->size - 2));
}

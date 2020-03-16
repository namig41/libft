/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_second.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 11:27:09 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:27:38 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline void	*stack_second(t_stack *stack)
{
	if (stack->size < 2)
		return (NULL);
	return (vector_get_element(stack, stack->size - 2));
}

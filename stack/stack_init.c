/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:40:51 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:24:52 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline int	stack_init(t_stack *stack, size_t capacity, size_t element_size)
{
	return (vector_init(stack, capacity, element_size));
}

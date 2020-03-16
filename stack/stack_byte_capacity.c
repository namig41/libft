/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_byte_capacity.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:06:30 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:23:35 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline size_t	stack_byte_capacity(const t_stack *stack)
{
	return (vector_byte_capacity(stack));
}

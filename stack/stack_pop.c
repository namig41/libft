/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:54:29 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/29 18:03:46 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline void	*stack_pop(t_stack *stack)
{
	return (vector_pop_back(stack));
}


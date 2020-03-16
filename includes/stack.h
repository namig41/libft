/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:03:42 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:35:41 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include "vector.h"

typedef t_vector	t_stack;

void				*stack_top(t_stack *stack);
void				*stack_second(t_stack *stack);
void				*stack_get_element(t_stack *stack, size_t index);
void				*stack_pop(t_stack *stack);
size_t				stack_byte_size(const t_stack *stack);
size_t				stack_byte_capacity(const t_stack *stack);
int					stack_destroy(t_stack *stack);
int					stack_init(t_stack *stack, size_t capacity,
								size_t element_size);
int					stack_is_empty(const t_stack *stack);
int					stack_is_initialized(const t_stack *stack);
int					stack_move(t_stack *dst, t_stack *src);
int					stack_move_data(t_stack *stack, void **data);
int					stack_move_array(t_stack *stack, void **arr, size_t size);
int					stack_push(t_stack *stack, void *data);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:43:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/10 16:43:48 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "galloc.h"

extern t_galloc *g_gc;

void			clear_memory(void)
{
	t_galloc	*d_node;

	while (g_gc)
	{
		d_node = g_gc;
		//ft_memdel(&d_node->data);
		ft_putstr("I AM HERE");
		ft_memdel((void **)&d_node);
	}
}

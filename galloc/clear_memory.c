/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:17:33 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/07 13:17:34 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "galloc.h"

void 			clear_memory(void)
{
	t_galloc	*d_node;

	if (!g_gc)
		return ;
	while (g_gc)
	{
		d_node = g_gc;
		g_gc = g_gc->next;
		ft_memdel((void **)&d_node->data);
		ft_memdel((void **)&d_node);
	}
}
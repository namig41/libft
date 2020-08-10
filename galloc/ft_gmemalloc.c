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

static void		node_front(t_galloc *node)
{
	if (!g_gc)
	{
		g_gc = node;
		return ;
	}
	node->next = g_gc;
	g_gc = node;
}

void			*ft_gmemalloc(size_t size)
{
	void		*data;
	t_galloc	*node;

	if (!(data = ft_memalloc(size)))
		return (NULL);
	if (!(node = ft_memalloc(sizeof(t_galloc))))
	{
		ft_memdel((void **)&data);
		return (NULL);
	}
	node_front(node);
	return (data);
}

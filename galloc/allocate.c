/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gmemalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:43:53 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/10 16:43:55 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "galloc.h"

t_galloc *g_gc = NULL;

inline static void	node_front(t_galloc *node)
{
	node->next = g_gc;
	g_gc = node;
}

void				*ft_gmemalloc(size_t size)
{
	void			*data;
	t_galloc		*node;

	if (!(data = ft_memalloc(size)))
		return (NULL);
	if (!(node = ft_memalloc(sizeof(t_galloc))))
	{
		ft_memdel((void **)&data);
		return (NULL);
	}
	node->data = data;
	node_front(node);
	return (data);
}

void				*ft_galloc(size_t size)
{
	void			*data;
	t_galloc		*node;

	if (!(data = malloc(size)))
		return (NULL);
	if (!(node = ft_memalloc(sizeof(t_galloc))))
	{
		ft_memdel((void **)&data);
		return (NULL);
	}
	node->data = data;
	node_front(node);
	return (data);
}
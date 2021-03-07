/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:43:38 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/11/26 14:48:50 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list 		*list_create_node(void *data, size_t size)
{
	t_list 	*node;

	if (!(node = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (!(node->data = malloc(size)))
	{
		ft_memdel((void **)&node);	
		return (NULL);
	}
	node->size = size;
	ft_memcpy(node->data, data, size);
	return (node);
}

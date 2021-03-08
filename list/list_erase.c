/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_erase.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:43:38 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/11/26 14:48:50 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_erase(t_list **list, void *data)
{
	t_list *cur_node;
	t_list *prev_node;

	if (list && data)
	{
		if (*list)
		{
			prev_node = NULL;
			cur_node = *list;
			while (cur_node)
			{
				if (!ft_memcmp(cur_node->data, data, cur_node->size))
				{
					if (prev_node)
						prev_node->next = cur_node->next;	
					else
						*list = (*list)->next;
					ft_memdel(&cur_node->data);
					ft_memdel((void **)&cur_node);
					return ;
				}
				prev_node = cur_node;
				cur_node = cur_node->next;
			}
		}
	}
}


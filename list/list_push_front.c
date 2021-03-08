/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_front.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:43:38 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/11/26 14:48:50 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_push_front(t_list **list, void *data, size_t size)
{
	t_list *tmp;

	if (list && data)
	{
		if (!(tmp = list_create_node(data, size)))
			return ;
		tmp->next = *list;
		*list = tmp;
	}
}


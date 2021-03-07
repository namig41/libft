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

#ifndef LIST_H
# define LIST_H

# include "libft.h"

/*
** --------------------------- STRUCTURE ---------------------------------
*/

typedef struct		s_list
{
	void			*data;
	size_t 			size;
	struct s_list	*next;
}					t_list;

/*
** --------------------------- FUNCTIONS --------------------------
** --------------------------- INSERTION -----------------------
*/

t_list 				*list_create_node(void *data, size_t size);
void				list_push_back(t_list **list, void *data, size_t size);
void				list_push_front(t_list **list, void *data, size_t size);

/*
** --------------------------- DELETION ---------------------
*/

void				list_erase(t_list **list, void *data);
void				list_destroy(t_list **list);

#endif


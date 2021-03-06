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
	struct s_list	*next;
}					t_list;

/*
** --------------------------- FUNCTIONS --------------------------
** --------------------------- INSERTION -----------------------
*/

void				list_push_back(t_list **list, void *data);
void				list_push_front(t_list **list, void *data);

/*
** --------------------------- DELETION ---------------------
*/

void				list_erase(t_list **list, void *data);
void				list_destroy(t_list **list, void *data);

#endif

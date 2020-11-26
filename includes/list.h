/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:43:38 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/11/26 14:44:11 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "libft.h"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *neww);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstswap(t_list *lst1, t_list *lst2);
t_list		*ft_lstswap(t_list *lst1, t_list *lst2);

#endif

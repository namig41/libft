/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:59:20 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 15:59:23 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nd;

	if (!del)
		return ;
	nd = NULL;
	if (*alst)
	{
		nd = (*alst)->next;
		ft_lstdelone(alst, del);
		ft_lstdel(&nd, del);
	}
}

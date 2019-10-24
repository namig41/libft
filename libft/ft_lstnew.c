/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:00:23 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:00:25 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nd;

	nd = NULL;
	if ((nd = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	nd->next = NULL;
	if (content == NULL)
	{
		nd->content = NULL;
		nd->content_size = 0;
	}
	else
	{
		if ((nd->content = malloc(content_size)) == NULL)
		{
			free(nd);
			return (NULL);
		}
		ft_memcpy(nd->content, content, content_size);
		nd->content_size = content_size;
	}
	nd->next = NULL;
	return (nd);
}

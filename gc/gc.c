/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:55:32 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/11 13:55:34 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

inline void		*gc_get_ptr_list(void)
{
	static void	*gc_list = {0};

	return (&gc_list);
}

void			*gc_alloc(size_t size)
{
	void		**gc_list;
	void		*ptr;

	gc_list = gc_get_ptr_list();
	if (!(ptr = malloc(sizeof(void *) + size)))
		return (NULL);
	(*((void **)ptr)) = (*gc_list);
	(*gc_list) = ptr;
	return (ptr + sizeof(void *));
}

void			*gc_calloc(size_t size)
{
	void		*ptr;

	if (!(ptr = gc_alloc(size)))
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

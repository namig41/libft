/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:55:38 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/11 13:55:39 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void		gc_free(void)
{
	void	*ptr_list;
	void	*ptr;

	ptr_list = (*((void **)gc_get_ptr_list()));
	while ((ptr = ptr_list))
	{
		ptr_list = (*((void **)ptr_list));
		ft_memdel(&ptr);
	}
}

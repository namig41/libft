/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:41:20 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 13:50:26 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_memswap(void *a, void *b, size_t size)
{
	void	*tmp;

	if (!(tmp = ft_memalloc(size)))
		return ;
	ft_memmove(tmp, a, size);
	ft_memmove(a, b, size);
	ft_memmove(b, tmp, size);
	ft_memdel(&tmp);
}

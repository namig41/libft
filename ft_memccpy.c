/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:01:13 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:01:14 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_uc	*d;
	t_cuc	*s;
	size_t	i;

	c = (t_uc)c;
	d = (t_uc *)dst;
	s = (t_cuc *)src;
	i = 0;
	while (i < n)
	{
		if ((d[i] = s[i]) == c)
			return ((void *)(d + i + 1));
		i++;
	}
	return (NULL);
}

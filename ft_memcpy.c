/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:01:51 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:01:52 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	t_uc	*d;
	t_cuc	*s;

	if (!dst && !src)
		return (NULL);
	d = (t_uc *)dst;
	s = (t_cuc *)src;
	while (n-- > 0)
		d[n] = s[n];
	return ((void *)(d));
}

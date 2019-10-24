/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:01:25 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:01:26 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	t_uc	*ns;
	size_t	i;

	i = 0;
	ns = (t_uc *)s;
	c = (t_uc)c;
	while (i < n)
	{
		if (ns[i] == c)
			return ((void *)(ns + i));
		i++;
	}
	return (NULL);
}

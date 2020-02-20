/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:05:17 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 18:37:39 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_putstr(char const *s, size_t width)
{
	size_t	i;
	size_t	count;
	size_t	len;

	count = 0;
	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		width = (width > 0) ? ft_min(len, width) : 0;
		while (i < width)
			count += ft_putchar(s[i++]);
	}
	return (count);
}

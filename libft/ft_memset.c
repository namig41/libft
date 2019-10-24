/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:02:41 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:02:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	t_uc	chr;
	t_uc	*str;

	i = 0;
	chr = c;
	str = (t_uc *)b;
	while (i < len)
		str[i++] = chr;
	return (str);
}

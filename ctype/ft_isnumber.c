/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:37:54 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/10 16:37:54 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isnumber(const char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && ft_isescape(str[i]))
		i++;
	while (i < len && !ft_isescape(str[i]))
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	while (i < len && ft_isescape(str[i]))
		i++;
	return ((i - len) == 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:56:15 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 13:16:46 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	t_ll			max;
	t_ll			prev;
	int				sign;

	sign = 1;
	max = 0;
	prev = 0;
	while ((*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		str -= (sign = (-1));
	else if (*str == '+')
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		max = max * 10 + (*str - '0');
		if (max < prev || max >= 9223372036854775807)
			return ((sign == -1) ? 0 : -1);
		prev = max;
		str++;
	}
	return (max * sign);
}

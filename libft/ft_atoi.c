/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:56:15 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 15:56:19 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			check_overflow(int sign)
{
	if (sign == -1)
		return (0);
	else
		return (-1);
}

int					ft_atoi(const char *str)
{
	long long			max;
	long long			prev;
	int					sign;

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
			return (check_overflow(sign));
		prev = max;
		str++;
	}
	return (max * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 17:41:08 by fpythago          #+#    #+#             */
/*   Updated: 2020/02/17 18:18:32 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

long	ft_max_l(long a, long b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

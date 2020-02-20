/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:04:06 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 13:44:53 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa_base(t_ull value, int base, char reg)
{
	char				*str;
	int					size;
	char				*tab;
	int					flag;
	t_ull				tmp;

	flag = 0;
	size = 0;
	tab = (reg >= 'A' && reg <= 'Z') ? "0123456789ABCDEF" : "0123456789abcdef";
	if (base < 2 || base > 16)
		return (0);
	tmp = value;
	while (tmp /= base)
		size++;
	size += flag + 1;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (--size >= 0)
	{
		str[size] = tab[value % base];
		value /= base;
	}
	return (str);
}

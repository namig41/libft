/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:56:15 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/14 16:23:53 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double ft_atof(char *str)
{
	int e;
	int c;
	double a;
	int strign;
	int i;

	i = 0;
	e = 0;
	a = 0.0;
	strign = 1;
	while ((c = *str++) != '\0' && ft_isdigit(c))
	{
		a = a * 10.0 + (c - '0');
	}
	if (c == '.') 
	{
		while ((c = *str++) != '\0' && ft_isdigit(c)) 
		{
		  a = a * 10.0 + (c - '0');
		  e--;
		}
	}
	if (c == 'e' || c == 'E') 
	{
		c = *str++;
		if (c == '+')
		  c = *str++;
		else if (c == '-')
		{
		  c = *str++;
		  strign = -1;
		}
		while (ft_isdigit(c)) 
		{
		  i = i * 10 + (c - '0');
		  c = *str++;
		}
		e += i * strign;
	}
	while (e > 0)
	{
		a *= 10.0;
		e--;
	}
	while (e < 0)
	{
		a *= 0.1;
		e++;
	}
	return a;
}


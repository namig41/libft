/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:10:19 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:10:21 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

/*
** The algorithm is found in "Hacker's Delight" by Henry S. Warren, Jr.
*/

#define TB(x) do { if (p[x] == '\0') return (p - str + x); } while (0)

#define TB_4       TB(0); TB(1); TB(2); TB(3)
#define TB_8 TB_4; TB(4); TB(5); TB(6); TB(7)

static const unsigned long g_mask01 = 0x0101010101010101;
static const unsigned long g_mask80 = 0x8080808080808080;

size_t	ft_strlen(const char *str)
{
	const char			*p;
	const unsigned long	*lp;

	lp = (const unsigned long *)((uintptr_t)str & ~(sizeof(long) - 1));
	if ((*lp - g_mask01) & ((~*lp) & g_mask80))
	{
		p = str;
		while (p < (const char *)(lp + 1))
		{
			if (*p == '\0')
				return (p - str);
			p++;
		}
	}
	lp++;
	while (1)
	{
		if ((*lp - g_mask01) & ((~*lp) & g_mask80))
		{
			p = (const char *)(lp);
			TB_8;
		}
		lp++;
	}
	return (0);
}

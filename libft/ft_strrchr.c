/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:15:08 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:15:09 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	t_ll	len;

	c = (t_uc)c;
	len = (t_ll)ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == c)
			return (char *)(s + len);
		len--;
	}
	return (NULL);
}

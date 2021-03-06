/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:10:00 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/17 18:21:48 by fpythago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

char	*gc_strjoin(const char *str1, const char *str2)
{
	char	*str3;

	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (gc_strdup(str2));
	if (!str2)
		return (gc_strdup(str1));
	if (!(str3 = gc_alloc(sizeof(*str3) *
						(ft_strlen(str1) + ft_strlen(str2) + 1))))
		return (NULL);
	ft_strcpy(str3, (char *)str1);
	ft_strcat(str3, (char *)str2);
	return (str3);
}

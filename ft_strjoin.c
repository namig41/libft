/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:10:00 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:10:01 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*str3;

	if (!str1 && !str2)
		return (NULL);
	if (!str1)
		return (ft_strdup(str2));
	if (!str2)
		return (ft_strdup(str1));
	if (!(str3 = malloc(sizeof(*str3) *
						(ft_strlen(str1) + ft_strlen(str2) + 1))))
		return (NULL);
	ft_strcpy(str3, (char *)str1);
	ft_strcat(str3, (char *)str2);
	return (str3);
}

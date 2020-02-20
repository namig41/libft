/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:11:42 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:11:43 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return (char *)(haystack);
	while (haystack[i])
	{
		if (ft_strncmp(haystack + i, needle, len) == 0)
			return (char *)(haystack + i);
		i++;
	}
	return (NULL);
}

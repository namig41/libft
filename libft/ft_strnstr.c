/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:11:52 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:11:53 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_pos;
	size_t	i;

	i = 0;
	needle_pos = 0;
	if (!*(needle))
		return ((char*)haystack);
	while (haystack[i] && i < len)
	{
		while ((haystack[i + needle_pos]) &&
				(haystack[i + needle_pos] == needle[needle_pos]) &&
				(i + needle_pos < len))
		{
			needle_pos++;
			if (needle[needle_pos] == '\0')
				return ((char*)&haystack[i]);
		}
		needle_pos = 0;
		i++;
	}
	return (NULL);
}

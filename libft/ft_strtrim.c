/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:12:53 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:12:58 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	where_start(char const *s)
{
	int start;

	start = 0;
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			&& s[start] != '\0')
		start++;
	return (start);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		end;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	len = 0;
	end = ft_strlen(s) - 1;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n')
			&& s[where_start(s)] != '\0')
	{
		end--;
		len++;
	}
	end++;
	len = ft_strlen(s) - (where_start(s) + len);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[where_start(s) + i];
	str[i] = '\0';
	return (str);
}

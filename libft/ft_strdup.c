/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:09:17 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:09:18 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	size_t	ssize;

	ssize = ft_strlen(str) + 1;
	if (!(copy = malloc(ssize)))
		return (NULL);
	ft_memcpy(copy, str, ssize);
	return (copy);
}

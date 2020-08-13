/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:12:40 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:12:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "gc.h"

char	*ft_strsub(char const *s, t_ui start, size_t len)
{
	char *sub_s;

	if (!s)
		return (NULL);
	if (!(sub_s = (char *)malloc(len + 1)))
		return (NULL);
	ft_strncpy(sub_s, s + start, len);
	return (sub_s);
}

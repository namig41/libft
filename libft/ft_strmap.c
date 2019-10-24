/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:08:06 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/27 16:08:07 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*ns;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if ((ns = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[i])
	{
		ns[i] = (*f)(s[i]);
		i++;
	}
	return (ns);
}

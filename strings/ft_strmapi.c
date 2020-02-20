/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:36:34 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/09/23 20:36:46 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		ns[i] = (*f)(i, s[i]);
		i++;
	}
	return (ns);
}

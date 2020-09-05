/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_clear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 18:31:47 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/09/05 18:31:47 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strsplit_clear(char **s)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		ft_memdel((void **)&s[i++]);
	ft_memdel((void **)&s);
}

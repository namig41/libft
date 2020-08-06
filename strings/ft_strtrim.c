/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:12:53 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:28:21 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
    unsigned int		start;
    int					end;

    if (!s)
        return (NULL);
    start = 0;
    end = (int)ft_strlen(s) - 1;
    while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
            s[start])
        start++;
    while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && s[end] &&
            end > (int)start)
        end--;
    return (ft_strsub(s, start, (end - start + 1)));
}

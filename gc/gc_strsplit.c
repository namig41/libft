/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:12:28 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/14 19:19:45 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

static char	**count_words(char const *s, char c)
{
	char	**arr;
	int		words;

	words = 0;
	while (*s)
	{
		if (*s != c)
			words++;
		while (*s != c && *s != '\0')
			s++;
		while (*s == c && *s != '\0')
			s++;
	}
	if (!(arr = (char **)gc_alloc(sizeof(*arr) * words + 1)))
		return (NULL);
	return (arr);
}

static int	len_word(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s == c && *s != '\0')
		s++;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len + 1);
}

char		**gc_strsplit(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	if (!(arr = count_words(s, c)))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (!(arr[i] = (char *)gc_alloc(sizeof(char) * len_word(s, c))))
			return (NULL);
		if (len_word(s, c) == 1)
			break ;
		j = 0;
		while (*s != c && *s != '\0')
			arr[i][j++] = *(s++);
		arr[i++][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}

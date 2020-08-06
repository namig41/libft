/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:29:20 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:38:29 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	g_shift;

int					get_next_line(const int fd, char **line)
{
	static t_vector c;
	char			*s;
	char			buf[BUFF_SIZE + 1];
	int 			g_n;

	if ((g_shift = (fd < 0 || !line)))
		return (MEM_ERR);
	vector_init(&c, VEC_SIZE, sizeof(char));
	while (!(s = vector_chr(&c, g_shift += !g_shift ? 0 : g_n, SEP)))
	{
		if ((g_n = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		buf[g_n] = '\0';
		if (!vector_push_back_array(&c, buf, g_n))
			return (MEM_ERR);
	}
	if (vector_is_empty(&c) && vector_destroy(&c))
		return (g_n < 0 ? MEM_ERR : END_FILE);
	g_n = s ? (s++ - (char *)c.data) : c.size;
	if (!(*line = ft_strsub(c.data, 0, g_n)))
		return (MEM_ERR);
	s ? vector_memmove(&c, (void *)s, c.data + c.size - (void *)s) :
		vector_clear(&c); 
	return (SUCCESS);
}

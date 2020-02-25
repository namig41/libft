/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 18:29:20 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/10/26 17:49:30 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					get_next_line(const int fd, char **line)
{
	static t_vector c;
	char 			*s;
	char			buf[BUFF_SIZE + 1];
	int				shift;
	int				n;

	if (shift = (fd < 0 || !line))
		return (MEM_ERR);
	vector_init(&c, VEC_SIZE, sizeof(char));
	while (!(s = vector_chr(&c, shift += !shift ? 0 : n, SEPARATOR)))
	{
		if ((n = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		buf[n] = '\0';
		if (!vector_push_back_array(&c, buf, n))
			return (MEM_ERR);
	}
	if ((vector_is_empty(&c) && !n) || n < 1 || vector_is_empty(&c))
	{
		vector_destroy(&c);
		return (n < 0 ? MEM_ERR : END_FILE);
	}
	n = s ? (s++ - (char *)c.data) : c.size;
	if (!(*line = ft_strnew(n)) & !ft_memcpy(*line, c.data, n))
		return (MEM_ERR);
    vector_memmove(&c, (void *)s, c.data + c.size - (void *)s);
	return (SUCCESS);
}

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
	static t_vector c[MAX_FILES] = {NULL};
	char 			*s;
	char			buf[BUFF_SIZE + 1];
	int				shift;
	int				n;

	if ((shift = (fd < 0 || !line || fd >= MAX_FILES)))
		return (MEM_ERR);
	vector_init(&c[fd], BUFF_SIZE, sizeof(char));
	while (!(s = ft_strchr(c[fd].data + (shift += !shift ? 0 : n), SEPARATOR)))
	{
		if ((n = read(fd, buf, BUFF_SIZE)) <= 0)
			break ;
		buf[n] = '\0';
		if (!vector_move_back_array(&c[fd], (void **)&buf, n))
			return (MEM_ERR);
	}
	if ((!vector_is_empty(&c[fd]) && !n) || n < 1 || !vector_is_empty(&c[fd]))
		return (n < 0 ? MEM_ERR : END_FILE);
	n = s ? (s - (char *)c[fd].data) : c[fd].size;
	if (!(*line = ft_strnew(n)) & !ft_memcpy(*line, c[fd].data, n))
		return (MEM_ERR);
    s = ft_strdup(s + 1);
    vector_move_array(&c[fd], (void **)&s, ft_strlen(s));
	return (SUCCESS);
}

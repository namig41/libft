/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 11:15:59 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:16:09 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE	1
# if BUFF_SIZE <= 0
#  error "BUFF_SIZE has wrong size"
# endif
# define VEC_SIZE 4
# define SEPARATOR '\n'
# define SUCCESS 1
# define END_FILE 0
# define MEM_ERR -1

# include "vector.h"

int			get_next_line(const int fd, char **line);

#endif

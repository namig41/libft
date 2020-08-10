
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpythago <fpythago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 15:23:50 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/03/16 11:33:42 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GALLOC_H
# define GALLOC_H
# include "libft.h"

typedef struct		s_galloc
{
	void			*data;
	struct s_galloc *next;

}					t_galloc;

t_galloc			*g_gc = NULL;;

void				*ft_gmemalloc(size_t size);
void 				clear_memory(void);	


#endif
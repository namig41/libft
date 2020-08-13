/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:57:30 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/11 13:57:32 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GC_H
# define GC_H
# include "libft.h"

/*
** --------------------------- INTERFACE -------------------------------------
*/

void						*gc_get_ptr_list(void);

/*
** --------------------------- ALLOCATE MEMORY -------------------------------
*/

void						*gc_alloc(size_t size);
void						*gc_calloc(size_t size);

/*
** --------------------------- CLEAN MEMORY ---------------------------------
*/

void						gc_free(void);

/*
** --------------------------- GC STRINGS ------------------------------------
*/

char						*gc_strjoin(const char *str1, const char *str2);
char						*gc_strdup(const char *str);
char						*gc_strnew(size_t size);
char						*gc_strsub(char const *s, t_ui start, size_t len);
char						**gc_strsplit(char const *s, char c);
#endif

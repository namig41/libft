/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:43:44 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/10 16:43:48 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gc.h"

void __attribute__ ((destructor)) gc_free(void)
{
    void *ptr_list;
    void *ptr;

	ptr_list  = (*((void **)gc_get_ptr_list())); 
    while ((ptr = ptr_list))
    {
        ptr_list = (*((void **)ptr_list));
        ft_memdel(&ptr);
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get_median.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 17:15:47 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/08/04 17:15:49 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

int	g_pivot;
int	g_tmp;

static void		vector_inits(t_vector *v1, t_vector *v2, t_vector *v3)
{
	vector_init(v1, 1, sizeof(int));
	vector_init(v2, 1, sizeof(int));
	vector_init(v3, 1, sizeof(int));
}

static void		vector_destroys(t_vector *v1, t_vector *v2, t_vector *v3)
{
	vector_destroy(v1);
	vector_destroy(v2);
	vector_destroy(v3);
}

static void		search(t_vector *v, t_vector *v1, t_vector *v2, t_vector *v3)
{
	size_t i;

	i = 0;
	vector_inits(v1, v2, v3);
	g_pivot = *(int *)vector_get_element(v, ft_random(v->size - 1));
	while (i < v->size)
	{
		g_tmp = *(int *)vector_get_element(v, i);
		if (g_tmp < g_pivot)
			vector_push_back_data(v1, &g_tmp);
		else if (g_tmp == g_pivot)
			vector_push_back_data(v2, &g_tmp);
		else
			vector_push_back_data(v3, &g_tmp);
		i++;
	}
}

int				vector_get_median(t_vector *v, size_t med)
{
	t_vector	lows;
	t_vector	pivots;
	t_vector	highs;

	if (v->size == 1)
		g_tmp = *(int *)vector_get_element(v, 0);
	else
	{
		search(v, &lows, &pivots, &highs);
		if (med < lows.size)
			g_tmp = vector_get_median(&lows, med);
		else if (med < lows.size + pivots.size)
		{
			vector_destroys(&lows, &highs, &pivots);
			return (g_pivot);
		}
		else
			g_tmp = vector_get_median(&highs, med - lows.size - pivots.size);
		vector_destroys(&lows, &highs, &pivots);
	}
	return (g_tmp);
}

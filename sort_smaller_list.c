/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_smaller_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 14:57:30 by zarslan           #+#    #+#             */
/*   Updated: 2022/06/26 12:58:41 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	triple_list(t_data *a)
{
	if (!(a->array[0] > a->array[1] && a->array[0] > a->array[2]))
	{
		if (a->array[1] > a->array[2])
			rev_rotate(a, 0);
		else if (a->array[2] > a->array[1])
			rotate(a, 0);
	}
	if (a->array[2] > a->array[1])
		swap(a, 0);
}

void	quartet_list(t_data *a, t_data *b)
{
	if (a->array[3] != 0)
	{
		if (a->array[2] == 0)
			rotate(a, 0);
		else if (a->array[1] == 0)
		{
			rev_rotate(a, 0);
			rev_rotate(a, 0);
		}
		else if (a->array[0] == 0)
			rev_rotate(a, 0);
	}
	push(a, b, 0);
	triple_list(a);
	push(b, a, 0);
}

void	quintuple_list(t_data *a, t_data *b)
{
	int	i;

	i = 4;
	while (i > 2)
	{
		if (a->array[i] == 0 || a->array[i] == 1)
		{
			push(a, b, 0);
			i--;
		}
		else
			rotate(a, 0);
	}
	if (b->array[0] > b->array[1])
		swap(b, 0);
	triple_list(a);
	push(b, a, 0);
	push(b, a, 0);
}

void	sort_smaller_list(t_data *a, t_data *b)
{
	if (a->size == 2)
		swap(a, 0);
	else if (a->size == 3)
		triple_list(a);
	else if (a->size == 4)
		quartet_list(a, b);
	else if (a->size == 5)
		quintuple_list(a, b);
}

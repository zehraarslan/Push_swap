/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:08:20 by zarslan           #+#    #+#             */
/*   Updated: 2022/06/26 12:57:42 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int *sort, t_data *a)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	while (i < a->size)
	{
		sort[i] = a->array[i];
		i++;
	}	
	i = -1;
	while (++i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			if (sort[i] > sort[j])
			{
				tmp = sort[i];
				sort[i] = sort[j];
				sort[j] = tmp;
			}
			j++;
		}
	}
}

void	indexing(t_data *a)
{
	int	*sort;
	int	i;
	int	j;

	sort = (int *)malloc(sizeof(int) * a->size);
	ft_sort(sort, a);
	i = 0;
	while (i < a->size)
	{
		j = -1;
		while (++j < a->size)
		{
			if (a->array[i] == sort[j])
			{
				a->array[i] = j;
				break ;
			}	
		}
		i++;
	}
	free(sort);
}

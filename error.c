/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:08:15 by zarslan           #+#    #+#             */
/*   Updated: 2022/06/26 17:18:24 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_mes(t_data *a, t_data *b)
{
	write(1, "Error", 5);
	free(a->array);
	free(b->array);
	exit(0);
}

void	error_mes2(t_data *a, t_data *b)
{
	free(a->array);
	free(b->array);
	exit(0);
}

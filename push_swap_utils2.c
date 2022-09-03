/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 12:54:06 by zarslan           #+#    #+#             */
/*   Updated: 2022/06/26 17:19:03 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		swap(stack1, 1);
		swap(stack2, 1);
		write(1, "ss\n", 3);
	}
}

void	rotate_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		rotate(stack1, 1);
		rotate(stack2, 1);
		write(1, "rr\n", 3);
	}
}

void	rev_rotate_together(t_data *stack1, t_data *stack2, int control)
{
	if (control == 0)
	{
		rev_rotate(stack1, 1);
		rev_rotate(stack2, 1);
		write(1, "rrr\n", 4);
	}
}

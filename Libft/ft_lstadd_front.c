/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:59:46 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/01 13:21:03 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
int	main()
{	

	t_list *l = (t_list *)malloc(sizeof(t_list));
	l -> content = "zzzzz";
	l -> next = NULL;
	t_list *n = (t_list *)malloc(sizeof(t_list));
	n -> content = "xxxxx";
	n -> next = NULL;
	ft_lstadd_front(&l, n);
	printf("%s\n", l -> content);
	printf("%s\n", l -> next -> content);
}*/
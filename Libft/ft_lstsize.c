/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:43 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/01 13:37:56 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*iter;
	size_t	i;

	if (!lst)
		return (0);
	iter = lst;
	i = 0;
	while (iter -> next != NULL)
	{
		i++;
		iter = iter -> next;
	}
	i++;
	return (i);
}
/*
int	main()
{
	int 	i;


	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst -> content = "zzzzz";
	lst -> next = (t_list *)malloc(sizeof(t_list));
	lst -> next -> content = "aaaa";
	lst -> next -> next = NULL;

	i = ft_lstsize(lst);
	printf("%d", i);
}*/
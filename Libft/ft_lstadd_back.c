/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:46:00 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/01 16:28:58 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter;

	if (new == NULL)
		return ;
	iter = *lst;
	if (*lst == NULL)
	{
		new -> next = *lst;
		*lst = new;
		return ;
	}
	while (iter -> next != NULL)
		iter = iter -> next;
	iter -> next = new;
}
/*
int	main()
{	
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst -> content = "zzzzz";
	lst -> next = (t_list *)malloc(sizeof(t_list));
	lst -> next -> content = "aaaa";
	lst -> next -> next = (t_list *)malloc(sizeof(t_list));
	lst -> next -> next -> content = "xxxx";
	lst -> next -> next -> next = NULL;

	t_list *n = (t_list *)malloc(sizeof(t_list));
	n -> content = "OK";
	n -> next = NULL;

	ft_lstadd_back(&lst, n);
	printf("%s\n", lst -> content);
	printf("%s\n", lst -> next -> content);
	printf("%s\n", lst -> next -> next -> content);
	printf("%s\n", lst -> next -> next -> next -> content);
}*/
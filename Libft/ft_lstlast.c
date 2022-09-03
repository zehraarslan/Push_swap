/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:20:14 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/01 13:43:43 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*iter;

	if (lst == NULL)
		return (NULL);
	iter = lst;
	if (iter -> next == NULL)
		return (iter);
	while (iter -> next != NULL)
	{
		iter = iter -> next;
	}
	return (iter);
}
/*
int	main()
{	
	t_list	*r;

	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst -> content = "zzzzz";
	lst -> next = (t_list *)malloc(sizeof(t_list));
	lst -> next -> content = "aaaa";
	lst -> next -> next = (t_list *)malloc(sizeof(t_list));
	lst -> next -> next -> content = "xxxx";
	lst -> next -> next -> next = NULL;

	r = ft_lstlast(lst);
	printf("%s\n", r -> content);
}*/
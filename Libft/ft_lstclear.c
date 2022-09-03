/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:36:17 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/02 12:53:18 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst != NULL)
	{
		iter = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = iter;
	}
	*lst = NULL;
}

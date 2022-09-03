/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:08:41 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 13:15:28 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	char	*str;

	str = (char *)dst;
	while (n-- > 0)
		*str++ = 0;
}
/*
int	main(void)
{
	char	str[25];

	str = "Hello.";
	ft_bzero(str, 4);
	printf("%s", str);
}*/
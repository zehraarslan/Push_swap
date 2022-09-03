/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:17:41 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 13:32:44 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!n || dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	char	dst[30] = "Kopyalanacak alan....";
	char	src[20] = "*+-*+-*+-*+-";

	ft_memcpy(dst, src, 6);
	printf("%s", dst);
}*/
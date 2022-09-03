/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 13:33:35 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 16:27:04 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!n || dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
		return (dst);
	}
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	char	dst[25] ="Zehra";
	char	src[25] = "ARSLAN";

	ft_memmove(dst,src,3);
	printf("%s", dst);
}*/
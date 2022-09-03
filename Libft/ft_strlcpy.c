/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:00:24 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/29 16:47:33 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t n)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (n != 0)
	{
		while (*src != '\0' && n-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char	dst[23] = "zzzzzzzzzz";
	char	src[12] = "xxeexxxxx";
	size_t	i;

	i = ft_strlcpy(dst, src, 2);
	printf("%s dizisi ve uzunuğu %zu",dst,i);
}*/
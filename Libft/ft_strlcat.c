/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:40:51 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 16:02:31 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	i = ft_strlen(dst);
	while (*src && i + 1 < n)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[21] = "ddddddd";
	char	src[12] = "jekfj";
	size_t i;

	i =ft_strlcat(dst, src, 15);
	printf("%s\n", dst);
	printf("%zu\n", i);

}*/
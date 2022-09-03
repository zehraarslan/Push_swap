/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:28:19 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 17:54:49 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*d;

	d = (char *)s;
	while (n > 0)
	{
		if (*d == (char )c)
			return ((void *)d);
		d++;
		n--;
	}
	return (NULL);
}
/*
int	main()
{
	char	*s = "/|\x12\xff\x09\0\x42\042\0\42|\\";
	char	*result;

	result = ft_memchr(s, '\0', 12);
	printf ("%p", result);
}*/
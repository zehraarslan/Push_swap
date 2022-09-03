/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:09:39 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/02 17:11:13 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*d1 == *d2 && n > 1)
	{
		d1++;
		d2++;
		n--;
	}
	return (*(unsigned char *)d1 - *(unsigned char *)d2);
}
/*
int	main()
{
	char	s[] = {-128, 0, 127, 0};
	char	s2[] = {0, 0, 127, 0};
	int	r;

	r = ft_memcmp(s, s2, 0);
	printf("%d", r);
}*/
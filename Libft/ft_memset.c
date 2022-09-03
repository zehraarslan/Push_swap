/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:49:21 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/28 13:08:18 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	char	*str;

	str = (char *) dst;
	while (len-- > 0)
		*str++ = c;
	return (dst);
}
/*
int	main(void)
{
	char	str[50];

	str = "Dizi içeriğini bir karakter ile değiştirme.";
	ft_memset(str, '*', 5);
	printf("%s", str);
}*/

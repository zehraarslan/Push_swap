/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:56:42 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/31 16:04:18 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void	ft_ft(unsigned int i, char *str)
{
	printf("Fonksiyon index = %d, adrs = %p\n", i ,str);
}

int	main()
{
	char *str = "Hello 42...";
	ft_striteri(str, ft_ft);
	printf("%s", str);
}*/
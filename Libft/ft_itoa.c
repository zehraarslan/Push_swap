/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:53:54 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/31 15:23:15 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	f_nbrlen(int n)
{
	int		nbr;
	int		i;

	nbr = n;
	i = 1;
	while (nbr && i++)
		nbr /= 10;
	i = i + (n < 0) + (n == 0);
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (result = ft_strdup("-2147483648"));
	len = f_nbrlen(n);
	result = (char *)malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	result[--len] = '\0';
	while (n >= 10)
	{
		result[--len] = (n % 10) + '0';
		n = n / 10;
	}
	result[--len] = n + '0';
	return (result);
}
/*
int	main()
{
	int		sayi;
	char	*result;

	sayi = 36217868;
	result = ft_itoa(sayi);
	printf("%s", result);
}*/
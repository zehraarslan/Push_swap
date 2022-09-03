/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:30:27 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/02 16:46:54 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sing;

	sing = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sing = -1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		result = (result * 10) + (*str - 48);
		if (result * sing < -2147483648)
			return (0);
		if (result * sing > 2147483647)
			return (-1);
		str++;
	}
	return (result * sing);
}
/*
int main(void)
{
	char *str = "---1";
	int result;

	result = ft_atoi(str);
	printf("%d", result);
}*/
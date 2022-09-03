/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 12:08:10 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/02 18:57:33 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	i;

	i = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * i + 1);
	if (!result)
		return (0);
	result[i] = '\0';
	while (i--)
		result[i] = s[i];
	return (result);
}
/*
int	main()
{
	char	*s = "dslfksdşl";
	char	*result;

	result = ft_strdup(s);
	printf("%s", result);
}*/
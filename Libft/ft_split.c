/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 18:07:33 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/02 19:09:26 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	c_kontrol(char const *s, char c)
{
	size_t	i;

	i = 1;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s +1) == '\0'))
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	row;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * c_kontrol(s, c));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	row = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			result[row++] = ft_substr(s, j, i - j);
	}
	result[row] = 0;
	return (result);
}
/*
int	main()
{
	char	*s = "\0aa\0bbb";
	char	**result;
	int		i;

	result = ft_split(s, '\0');
	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
}*/
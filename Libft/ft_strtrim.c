/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:29:02 by zarslan           #+#    #+#             */
/*   Updated: 2022/01/31 13:10:38 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_trim(char s, char const *set)
{
	while (*set != '\0')
		if (s == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*result;
	size_t	len;

	if (!s || !set)
		return (NULL);
	while (c_trim(*s, set) && *s != '\0')
		s++;
	len = ft_strlen(s);
	while (c_trim(s[len - 1], set) && len != 0)
		len--;
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s, len + 1);
	return (result);
}
/*
int	main()
{
	char	*s = "   ..  Zehra ARSLAN ..   ";
	char	*set = " .";
	char	*result;

	result = ft_strtrim(s, set);
	printf("%s", result);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zarslan <zarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:55:52 by zarslan           #+#    #+#             */
/*   Updated: 2022/02/03 14:55:53 by zarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (*haystack != '\0' && len >= slen)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] != '\0')
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int	main()
{
	char *s1 = "aaabcabcd";
	char *s2 = "c";
	size_t max = strlen(s2);
	char *i2 = ft_strnstr(s1, s2, 8);
	printf("%s", i2);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:52:28 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:52:29 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	hay = (char *)haystack;
	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if ((!len || !haystack) && len == 0)
		return (NULL);
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
			j++;
		if (needle[j] == '\0')
			return (&hay[i]);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char *str;
	char *str1;

	str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	str1 = strnstr("lorem ipsum dolor sit amet", "dolor", 15);

	printf("le mien : %s\n", str);
	printf("le sien : %s\n", str1);
}
*/
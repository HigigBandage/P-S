/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:51:53 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:51:54 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	c;
	size_t	d;

	if (!destsize)
		return (ft_strlen(src));
	if (destsize <= ft_strlen(dst))
		return (destsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] && c + 1 < destsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10] = "mfdtjyomo";
	printf("%lu\n", ft_strlcat(a,"lorem ipsum dolor sit amet", 0));
	printf("%lu\n", strlcat(a,"lorem ipsum dolor sit amet", 0));
}*/
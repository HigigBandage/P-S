/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:52:34 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:52:36 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ret;

	ret = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == s[len])
			return (&ret[len]);
		len--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char tab[] = "salutluut";
	printf("%s\n", ft_strrchr(tab, 'l'));
	printf("%s\n", strrchr(tab, 'l'));
}
*/
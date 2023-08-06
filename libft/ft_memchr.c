/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:50:09 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:50:10 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;
	int				i;

	ret = (unsigned char *)s;
	i = 0;
	while (n)
	{
		if (ret[i] == (unsigned char)c)
			return (&ret[i]);
		n--;
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:49:29 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:49:30 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clst;
	t_list	*nlst;

	if (!lst || !del)
		return ;
	clst = *lst;
	while (clst)
	{
		nlst = clst->next;
		del(clst->content);
		free(clst);
		clst = nlst;
	}
	*lst = 0;
}

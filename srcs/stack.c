/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:54:39 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:54:40 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_index(t_stack *stack)
{
	t_stack	*next;
	t_stack	*current;

	current = stack;
	while (current)
	{
		current->index = 0;
		next = stack;
		while (next)
		{
			if (current->i > next->i)
				current->index++;
			next = next->next;
		}
		current = current->next;
	}
}

t_stack	*add_stack(t_stack *stack, char *c, char **tab)
{
	t_stack	*tmp;

	tmp = malloc(sizeof(t_stack));
	if (tmp)
	{
		tmp->i = ft_atoi2(c, stack, tab);
		tmp->next = stack;
	}
	return (tmp);
}

t_stack	*create_stack(t_stack *stack, int j, char **av, char **tab)
{
	int	i;

	i = tab_len(av);
	while (--i >= j)
		stack = add_stack(stack, av[i], tab);
	return (stack);
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:54:23 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:54:25 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_stack *stack)
{
	int	prev;

	if (!stack)
		print_error("Error", stack, NULL);
	prev = stack->i;
	stack = stack->next;
	while (stack)
	{
		if (prev > stack->i)
			return (0);
		prev = stack->i;
		stack = stack->next;
	}
	return (1);
}

int	has_double(t_stack *stack)
{
	t_stack	*next;
	t_stack	*current;
	int		i;

	i = 0;
	current = stack;
	while (current)
	{
		next = stack;
		while (next)
		{
			if (current->i == next->i)
				i++;
			if (i > 1)
				return (1);
			next = next->next;
		}
		i--;
		current = current->next;
	}
	return (i);
}

int	not_number(char **tab, int i)
{
	int	j;

	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]) && tab[i][j] != '-' && tab[i][j] != '+')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_error(t_stack *stack, char **tab, int i)
{
	return (not_number(tab, i) || has_double(stack));
}

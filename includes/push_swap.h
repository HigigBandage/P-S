/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfinn <dfinn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:47:42 by dfinn             #+#    #+#             */
/*   Updated: 2023/08/06 14:47:47 by dfinn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_stack	t_stack;

struct s_stack
{
	int		i;
	int		index;
	t_stack	*next;
};

int		has_double(t_stack *stack);
void	print_error(char *str, t_stack *stack, char **tab);
int		not_number(char **tab, int i);
int		tab_len(char **tab);
int		ft_atoi2(const char *str, t_stack *stack, char **tab);
void	free_tab(char **tab);
void	free_stack(t_stack *stack);
void	put_index(t_stack *stack);
t_stack	*add_stack(t_stack *stack, char *c, char **tab);
t_stack	*create_stack(t_stack *stack, int j, char **av, char **tab);
t_stack	*get_bottom_stack(t_stack *stack);
t_stack	*get_before_bottom_stack(t_stack *stack);
int		is_stack_sorted(t_stack *stack);
int		check_error(t_stack *stack, char **tab, int i);
int		get_smallest(t_stack *stack, int *i);
int		get_biggest(t_stack *stack);
int		get_stack_len(t_stack *stack);
void	sort_two(t_stack **stack);
void	sort_three(t_stack **stack_a);
void	sort_four(t_stack **stack_a, t_stack **stack_b);
void	sort_five(t_stack **stack_a, t_stack **stack_b);
void	sort_all(t_stack **stack_a, t_stack **stack_b);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
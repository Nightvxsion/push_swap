/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:55:16 by marcgar2          #+#    #+#             */
/*   Updated: 2025/01/30 08:55:43 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	r_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheap)
{
	while (*b != cheap->target_node && *a != cheap)
		rr(a, b, false);
	current_index(*a);
	current_index(*b);
}

static void	rv_both(t_stack_node **a, t_stack_node **b, t_stack_node *cheap_again)
{
	while (*b != cheap_again->target_node && *a != cheap_again)
		rrr(a, b, false);
	current_index(*a);
	current_index(*b);
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest_node;

	cheapest_node = get_cheap_item(*a);
	if (cheapest_node->average && cheapest_node->target_node->average)
		r_both(a, b, cheapest_node);
	else if (!(cheapest_node->average)
		&& !(cheapest_node->target_node->average))
		rv_both(a, b, cheapest_node);
	ready_to_push(a, cheapest_node, 'a');
	ready_to_push(b, cheapest_node->target_node, 'b');
	pb(b, a, false);
}

static void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	ready_to_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_to_the_top(t_stack_node **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->average)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	leng_a;

	leng_a = stack_len(*a);
	if (leng_a-- > 3 && !is_sorted(*a))
		pb(b, a, false);
	if (leng_a-- > 3 && !is_sorted(*a))
		pb(b, a, false);
	while (leng_a-- > 3 && !is_sorted(*a))
	{
		init_node_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_three_elem(a);
	while (*b)
	{
		init_node_b(*a, *b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_to_the_top(a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 09:40:31 by marcgar2          #+#    #+#             */
/*   Updated: 2025/01/17 10:08:52 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	current_index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->average = true;
		else
			stack->average = false;
		stack = stack->next;
		++i;
	}
}

static void	target_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*real_b;
	t_stack_node	*target_b;
	long			best_match;

	while (a)
	{
		best_match = LONG_MIN;
		real_b = b;
		while (real_b)
		{
			if (real_b->nbr < a->nbr && real_b->nbr > best_match)
			{
				best_match = real_b->nbr;
				target_b = real_b;
			}
			real_b = real_b->next;
		}
		if (best_match == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_b;
		a = a->next;
	}
}

static void	cost_a(t_stack_node *a, t_stack_node *b)
{
	int	leng_a;
	int	leng_b;

	leng_a = stack_len(a);
	leng_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->average))
			a->push_cost = leng_a - (a->index);
		if (a->target_node->average)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += leng_b - (a->target_node->index);
		a = a->next;
	}
}

void	cheapest(t_stack_node *list)
{
	long			actual_cheapest;
	t_stack_node	*cheapest_node;

	if (!list)
		return ;
	actual_cheapest = LONG_MAX;
	while (list)
	{
		if (list->push_cost < actual_cheapest)
		{
			actual_cheapest = list->push_cost;
			cheapest_node = list;
		}
		list = list->next;
	}
	cheapest_node->cheap = true;
}

void	init_node_a(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	target_a(a, b);
	cost_a(a, b);
	cheapest(a);
}

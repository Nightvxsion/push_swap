/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:39:15 by marcgar2          #+#    #+#             */
/*   Updated: 2025/01/20 18:39:15 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	target_b(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*real_a;
	t_stack_node	*target_a;
	long			best_match;

	while (b)
	{
		best_match = LONG_MAX;
		real_a = a;
		while (real_a)
		{
			if (real_a->nbr > b->nbr && real_a->nbr < best_match)
			{
				best_match = real_a->nbr;
				target_a = real_a;
			}
			real_a = real_a->next;
		}
		if (best_match == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_a;
		b = b->next;
	}
}

void	init_node_b(t_stack_node *a, t_stack_node *b)
{
	current_index(a);
	current_index(b);
	target_b(a, b);
}

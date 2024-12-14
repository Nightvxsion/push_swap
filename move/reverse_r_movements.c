/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_r_movements.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:01:55 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 22:01:55 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	rra(t_stack *stack_a)
{
	reverse_rot(stack_a);
	write(1, "rra\n", 4);
}
void	rrb(t_stack *stack_b)
{
	reverse_rot(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rot(stack_a);
	reverse_rot(stack_b);
	write(1, "rrb\n", 4);
}
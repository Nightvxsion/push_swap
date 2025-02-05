/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_b_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 23:35:40 by marcgar2          #+#    #+#             */
/*   Updated: 2025/02/05 23:35:40 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	ready_to_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

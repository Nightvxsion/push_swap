/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:22:29 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/10 22:22:29 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
void	reverse_rotate(t_stack *stack)
{
	int	last_pos;

	if (stack->size > 1)
	{
		last_pos = stack->data[stack->size - 1];
		ft_memmove(&stack->data[1], &stack->data[0], sizeof(int) * (stack->size - 1));
		stack->data[0] = last_pos;
	}	
}
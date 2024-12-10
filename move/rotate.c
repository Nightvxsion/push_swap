/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:03:30 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/10 22:03:30 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
void	rotate(t_stack *stack)
{
	int first_pos;
	if (stack->size > 1)
	{
		first_pos = stack->data[0];
		ft_memmove(&stack->data[0], &stack->data[1], sizeof(int) * (stack->size - 1));
		stack->data[stack->size - 1] = first_pos;
	}
}
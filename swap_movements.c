/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:00:19 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 09:04:20 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
void sa(t_stack *stack_a)
{
    swap_2(stack_a);
    write(1, "sa\n", 3);
}
void sb(t_stack *stack_b)
{
    swap_2(stack_b);
    write(1, "sa\n", 3);
}

void ss(t_stack *stack_a, t_stack *stack_b)
{
    swap_2(stack_a);
    swap_2(stack_b);
    write(1, "ss\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:47:06 by marcgar2          #+#    #+#             */
/*   Updated: 2025/01/16 17:47:06 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	swap(t_stack_node **top)
{
	if (!*top || !(*top)->next)
		return ;
	*top = (*top)->next;
	(*top)->prev->prev = *top;
	(*top)->prev->next = (*top)->next;
	if ((*top)->next)
		(*top)->next->prev = (*top)->prev;
	(*top)->next = (*top)->prev;
	(*top)->prev = NULL;
}

void	sa(t_stack_node **stack, bool print)
{
	swap(stack);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **stackb, bool print)
{
	swap(stackb);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **stack, t_stack_node **stackb, bool print)
{
	swap(stack);
	swap(stackb);
	if (!print)
		ft_printf("ss\n");
}

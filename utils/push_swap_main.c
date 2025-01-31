/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:46:16 by marcgar2          #+#    #+#             */
/*   Updated: 2025/01/30 08:50:27 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_stack(t_stack_node *stack, char *name)
{
	ft_printf("%s ", name);
	while (stack)
	{
		ft_printf("%d ", stack->nbr);
		stack = stack->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split(argv[1], ' ');
	init_stack_a(&stack_a, argv + 1);
	//print_stack(stack_a, "STACK A ->");
	//print_stack(stack_b, "STACK B ->");
	if (!is_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&stack_a, false);
		else if (stack_len(stack_b) == 3)
			sort_three_elem(&stack_a);
		else
			sort_stacks(&stack_a, &stack_b);
	}
	//print_stack(stack_a, "STACK A ->");
	//print_stack(stack_b, "STACK B ->");
	free_stack(&stack_a);
	return (0);
}

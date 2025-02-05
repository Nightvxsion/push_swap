/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:46:16 by marcgar2          #+#    #+#             */
/*   Updated: 2025/02/04 08:16:30 by marcgar2         ###   ########.fr       */
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

void	free_split_leak(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	sorting(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	len;

	len = stack_len(*stack_a);
	if (len == 2)
		sa(stack_a, false);
	else if (len == 3)
		sort_three_elem(stack_a);
	else
		sort_stacks(stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;
	bool			is_split;

	stack_a = NULL;
	stack_b = NULL;
	is_split = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = split(argv[1], ' ');
		is_split = 1;
	}
	init_stack_a(&stack_a, argv + 1);
	if (!is_sorted(stack_a))
		sorting(&stack_a, &stack_b);
	free_stack(&stack_a);
	if (is_split)
		free_split_leak(argv);
	return (0);
}

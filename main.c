/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:21:09 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 22:21:09 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"

void	print_stack(t_stack *stack, char *name)
{
	t_list	*current;
	
	write(1, name, ft_strlen(name));
	write(1, ": ", 2);
	current = stack->top;
	while (current)
	{
		ft_putnbr_fd(*(int *)current->content, 1);
		write(1, " ", 1);
		current = current->next;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		values_a[] = {1, 2, 3, 4, 5};
	int		values_b[] = {6, 7, 8};
	int		i;

	// Inicializamos stack_a
	stack_a.top = NULL;
	stack_a.size = 5;
	for (i = 0; i < 5; i++)
		ft_lstadd_back(&(stack_a.top), ft_lstnew(&values_a[i]));

	// Inicializamos stack_b
	stack_b.top = NULL;
	stack_b.size = 3;
	for (i = 0; i < 3; i++)
		ft_lstadd_back(&(stack_b.top), ft_lstnew(&values_b[i]));

	// Imprimimos el estado inicial
	write(1, "Estado inicial:\n", 16);
	print_stack(&stack_a, "Stack A");
	print_stack(&stack_b, "Stack B");

	// Aplicamos movimientos
	write(1, "\nAplicando movimientos...\n", 26);
	ra(&stack_a);
	rb(&stack_b);
	rr(&stack_a, &stack_b);
	reverse_rot(&stack_a);
	reverse_rot(&stack_b);

	// Imprimimos el estado final
	write(1, "\nEstado final:\n", 15);
	print_stack(&stack_a, "Stack A");
	print_stack(&stack_b, "Stack B");

	return (0);
}
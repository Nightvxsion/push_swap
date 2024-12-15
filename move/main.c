/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:21:09 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/13 10:00:45 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
#include "../lib/libft.h"

void	print_stack(t_stack *stack, char *name)
{
	t_list	*current;
	
	write(1, name, ft_strlen(name));
	write(1, ": ", 2);
	current = (t_list *)stack->top;
	while (current)
	{
		ft_putnbr_fd(*(int *)current->content, 1);
		write(1, " ", 1);
		current = current->next;
	}
	write(1, "\n", 1);
}

int main(void)
{
	t_stack stack_a;
	t_stack stack_b;

	// Inicializamos las pilas
	stack_a.top = NULL;
	stack_a.size = 0;
	stack_b.top = NULL;
	stack_b.size = 0;

	// Creamos algunos elementos para la pila A
	int values_a[] = {1, 2, 3, 4, 5};
	int i;
	for (i = 0; i < 5; i++)
	{
		int *current_value = malloc(sizeof(int));
		if (!current_value)
		{
			free_stack((t_list **)&stack_a);
			write(2, "Error: malloc failed\n", 22);
			exit(1);
		}
		*current_value = values_a[i];
		ft_lstadd_back((t_list **)&(stack_a.top), ft_lstnew(current_value));
	}

	// Imprimimos la pila A inicial
	print_stack(&stack_a, "A");

	// Hacemos algunos movimientos
	// push A -> B
	push(&stack_a, &stack_b);
	print_stack(&stack_a, "A");
	print_stack(&stack_b, "B");

	// rotate A
	rotate(&stack_a);
	print_stack(&stack_a, "A");

	// reverse rotate B
	reverse_rot(&stack_b);
	print_stack(&stack_b, "B");

	// swap A
	swap_2(&stack_a);
	print_stack(&stack_a, "A");

	// Liberamos la memoria
	free_stack((t_list **)&stack_a);
	free_stack((t_list **)&stack_b);

	return 0;
}
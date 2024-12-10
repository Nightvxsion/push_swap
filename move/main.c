/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 23:11:12 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/10 23:11:12 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
void print_stack(t_stack *stack)
{
	for (int i = 0; i < stack->size; i++)
	{
		ft_putnbr_fd(stack->data[i], 1);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}
void free_memory(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->data != NULL)
		free(stack_a->data);  // Liberar memoria de stack_a
	if (stack_b->data != NULL)
		free(stack_b->data);  // Liberar memoria de stack_b
}
int main(int argc, char **argv)
{	
	t_stack	stack_a;
	t_stack	stack_b;
	int i;
	// Verificar que todos los argumentos sean números enteros
	i = 1;
	if (argc < 2)
	{
		int_error();
		return 1;
	}
	while (i < argc)
	{
		if (!is_int(argv[i]))  // Si el argumento no es un entero
		{
			int_error(); // Mostrar error
			return 1; // Salir con código de error
		}
		i++;
	}	
	// Inicializar las pilas (puedes cambiar cómo inicializas las pilas según tu estructura)
	stack_a.size = argc - 1;
	stack_b.size = 0;
	if (stack_a.size > 0)
	{
		stack_a.data = malloc(stack_a.size * sizeof(int));  // Asignar memoria para stack_a
		if (!stack_a.data)  // Comprobar si malloc falló
		{
			int_error();
			return 1;
		}
	}
	else
		stack_a.data = NULL; // Si no hay datos, asignar NULL
	stack_b.data = NULL; // No necesitamos datos en stack_b al principio	
	// Convertir los argumentos en números y llenar la pila stack_a
	for (i = 0; i < stack_a.size; i++)
		stack_a.data[i] = ft_atoi(argv[i + 1]);	

	// Mostrar el estado inicial de la pila A
	write(1, "Pila A antes de las operaciones:\n", 32);
	print_stack(&stack_a);
	write(1, "Pila B antes de las operaciones:\n", 32);
	print_stack(&stack_b);	

	// Realizar algunas operaciones de prueba (puedes agregar más)
	ra(&stack_a);
	sa((int *)&stack_a);
	rra(&stack_a);
	ss((int *)&stack_a, (int *)&stack_b);

	// Mostrar el estado final de las pilas
	write(1, "Pila A después de las operaciones:\n", 34);
	print_stack(&stack_a);
	write(1, "Pila B después de las operaciones:\n", 34);
	print_stack(&stack_b);	

	// Liberar memoria
	free_memory(&stack_a, &stack_b);

	return 0;
}

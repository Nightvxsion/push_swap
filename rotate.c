/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:16:26 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 21:16:26 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
#include "./lib/libft.h"

void	rotate(t_stack *stack)
{
	t_list *save;

	if (!stack || !stack->top || !(stack->top->next))
		return;
	
	stack->top = save; // Guardar el primer nodo
	stack->top = stack->top->next; // Actualizar la posicion de toda la lista
	save->next = NULL; // Hacer que la lista (donde hemos guardado el nodo) sea solo 1 elemento
	ft_lstadd_back(&(stack->top), save); // Usar lstadd_back para añadir save AL FINAL
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:16:26 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/13 10:03:09 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
#include "../lib/libft.h"

void	rotate(t_stack *stack)
{
	t_list *save;
	t_list *now;
	
	if (!stack || !stack->top || !(stack->top->next))
		return;
	save = NULL;
	stack->top = (t_node *)save; // Guardar el primer nodo
	stack->top = stack->top->next; // Actualizar la posicion de toda la lista
	save->next = NULL; // Hacer que la lista (donde hemos guardado el nodo) sea solo 1 elemento
	
	now = (t_list *)stack->top;
	while(now->next)
		now = now->next;
	now->next = save;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:01:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/13 10:01:30 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
#include "./lib/libft.h"

void	reverse_rot(t_stack *stack)
{
	t_list	*iter; // Lo que va a encontrar el ultimo nodo
	t_list	*save; // Una vez encontrado, guardar el ultimo nodo ahi

	if (!stack || !stack->top || !(stack->top->next))
		return;
	iter = stack->top; // Itera sobre stack (desde el principio)
	while (iter->next && iter->next->next) // iter.next es el siguiente nodo NULL, iter.next.next es el siguiente nodo y el siguiente ya es NULL
	iter = iter->next;
	save = iter->next; // Guardamos el ultimo nodo encontrado en save
	iter->next = NULL; // Desconectamos el hueco restante y lo igualamos a NULL para que sea el último
	ft_lstadd_front((t_list **)&(stack->top), save); // Usando lstadd_front llevamos el nodo guardado al principio de la lista principal
}
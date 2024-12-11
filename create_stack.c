/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 20:52:43 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/11 20:52:43 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
t_stack *create_stack(void)
{
	t_stack *new_stack;

	new_stack = malloc(sizeof(new_stack)); // Alojar memoria en la lista
	if (!new_stack)
		return (NULL);
	new_stack->top = NULL; // Init data de la lista en NULL (ya que es ptr-to-ptr)
	new_stack->size = 0; // Init el tamaño (size) de la lista en 0 (ya que es int-to-int)
	return (new_stack);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 22:05:44 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 22:05:44 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
#include "../lib/libft.h"
void	swap_2(t_stack *src)
{
	t_node *first;
	t_node *second;

	if (!src || !src->top || !(src->top->next)) // Si no existe ni la lista ni los 2 elementos de la lista
		return;
	first = src->top; // Obtencion del primer elemento de la lista
	second = src->top->next; // Obtencion del segundo elemento de la lista

	src->top = second;
	first->next = second->next;
	second->next = first;
}

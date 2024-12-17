/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:15:25 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/17 07:53:20 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
#include "../lib/libft.h"
void	push(t_stack *src, t_stack *dst)
{
	t_list	*tmp;

	if (!src || !src->top)
		return;
	tmp = (t_list *)src->top; // Tmp apunta a la primera posicion
	src->top = (t_node *)src->top->next; // El indice (top) al estar en la segunda posicion, pasa a la primera
	src->size--; // Decrementa un valor ya que nos hemos pasado el valor guardado a la otra lista

	tmp->next = NULL;
	ft_lstadd_front((t_list **)&(dst->top), tmp); // Añadimos a la primera posicion de la otra lista, el numero guardado (tmp)
	dst->size++; // Aumentamos su tamaño ya que hay un valor
}
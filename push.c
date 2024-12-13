/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:15:25 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/13 10:01:05 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
#include "./lib/libft.h"
void	push(t_stack *src, t_stack *dst)
{
	t_list	*tmp;
	tmp = NULL;

	if (!src || src->top == NULL)
		return;
	src->top = tmp; // Tmp apunta a la primera posicion
	src->top = src->top->next; // El indice (top) al estar en la segunda posicion, pasa a la primera
	src->size--; // Decrementa un valor ya que nos hemos pasado el valor guardado a la otra lista

	ft_lstadd_front((t_list **)&(dst->top), tmp); // Añadimos a la primera posicion de la otra lista, el numero guardado (tmp)
	dst->size++; // Aumentamos su tamaño ya que hay un valor
}
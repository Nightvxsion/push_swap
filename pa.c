/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:24:18 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/09 22:24:18 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *src, t_stack *dest)
{
	int	i;
	i = dest->size;

	while (i > 0)
	{
		dest->data[i] = dest->data[i - 1];
		i--;
	}
	dest->data[0] = src->data[0];
	src->size++;
	while (i < src->size - 1)
	{
		src->data[i] = src->data[i + 1];
		i++;
	}
	src->size--;
}
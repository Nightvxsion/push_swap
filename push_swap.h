/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:17:17 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/09 22:17:17 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*data; // Numero a pushear/swapear/rotar etc..
	int	size; // Tamaño de cada stack
	int	capacity; 
}	t_stack; // Referencia en funcion

void	sa(int *sa);
void	sb(int *sb);
void	pa(t_stack *src, t_stack *dest);
void	pb(t_stack *src, t_stack *dest);
void ra(t_stack *stack);
void rb(t_stack *stack_b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 22:17:17 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 09:10:03 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

typedef struct s_stack
{
	t_node	*top; // Numero a pushear/swapear/rotar etc..
	int	size; // Tamaño de cada stack
}	t_stack; // Referencia en funcion

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}	t_node;

t_stack *create_stack(void);
void	swap_2(t_stack *src);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	push(t_stack *src, t_stack *dst)
void    pa(t_stack *src, t_stack *dst);
void    pb(t_stack *src, t_stack *dst);
void	rotate(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack_b);
void	reverse_rotate(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

int		is_int(char *str);
void	int_error(void);

#endif

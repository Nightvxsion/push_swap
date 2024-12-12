/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_movements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:07:18 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/12 09:09:33 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./lib/push_swap.h"
void    pa(t_stack *src, t_stack *dst)
{
    push(src, dst);
    write(1, "pa\n", 3);
}
void    pb(t_stack *src, t_stack *dst)
{
    push(src, dst);
    write(1, "pb\n", 3);
}
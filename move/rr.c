/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:10:52 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/10 22:10:52 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"
void	rr(t_stack *rotate_a, t_stack *rotate_b)
{
	rotate(rotate_a);
	rotate(rotate_b);
	write(1, "rr\n", 3);
}
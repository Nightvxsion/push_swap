/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   non_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:41:13 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/10 22:41:13 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

int	is_int(char *str)
{
	int	i;
	i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	int_error(void)
{
	write(2, "KERNEL PANIC!\n", 15);
}
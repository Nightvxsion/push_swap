/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:29:29 by marcgar2          #+#    #+#             */
/*   Updated: 2024/09/27 23:21:41 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"

int	ft_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}

/*int	main(void)
{
	printf("Caso I -> %d\n", ft_isdigit('9'));
}*/
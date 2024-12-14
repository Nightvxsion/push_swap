/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:37:20 by marcgar2          #+#    #+#             */
/*   Updated: 2024/12/13 09:50:17 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/libft.h"
#include "../lib/push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ulti;

	ulti = ft_lstlast(*lst);
	if (!ulti || !new)
		return;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ulti = *lst;
	while (ulti->next)
		ulti = ulti->next;
	ulti->next = new;
}
/*int main(void)
{
	t_list *nodo1 = ft_lstnew("Nodo 1");
	t_list *nodo2 = ft_lstnew("Nodo 2");
	t_list *lista = nodo1;

	nodo1->next = nodo2;
	t_list *nuevo_nodo = ft_lstnew("Nodo 3");
	ft_lstadd_back(&lista, nuevo_nodo);
	t_list *temp = lista;
	while (temp)
	{
		printf("Contenido del nodo: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	free(nodo1);
	free(nodo2);
	free(nuevo_nodo);
	return (0);
}*/
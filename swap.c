#include "./lib/push_swap.h"
#include "-/lib/libft.h"
void	swap(t_stack *src)
{
	t_stack *first;
	t_stack *second;

	if (!src || !src->top || !(src->top->next)) // Si no existe ni la lista ni los 2 elementos de la lista
		return;
	first = src->top; // Obtencion del primer elemento de la lista
	second = src->top->next; // Obtencion del segundo elemento de la lista

	src->top = first;
	first->next = second->next;
	second->next = first;
}

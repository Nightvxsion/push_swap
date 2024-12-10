#include "push_swap.h"
void ra(t_stack *stack)
{
	int	first_pos;
	if (stack->size > 1)
	{
		first_pos = stack->size[0]; //Guardamos la primera posición (como en los cubos de rubik cuando guardas una esquina)
		ft_memmove(&stack->data[0], &stack->data[1], sizeof(int) * (stack->size - 1)); // Movimiento de mover atras desde la posicion 1 a 0
		stack->data[stack->size - 1] = first_pos; //Mueve todos los elementos una posición atras en el array
	}
}

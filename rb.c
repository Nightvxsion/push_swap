#include "push_swap.h"
#include "libft.h"
void rb(t_stack *stack_b)
{
	int	first_pos;
	if (stack_b->size > 1)
	{
		first_pos = stack_b->size[0]; //Guardamos la primera posición (como en los cubos de rubik cuando guardas una esquina)
		ft_memmove(&stack_b->data[0], &stack_b->data[1], sizeof(int) * (stack_b->size - 1)); // Movimiento de mover atras desde la posicion 1 a 0
		stack_b->data[stack->size - 1] = first_pos; //Mueve todos los elementos una posición atras en el array
	}
}

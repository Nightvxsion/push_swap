/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:29:32 by marcgar2          #+#    #+#             */
/*   Updated: 2025/02/03 22:49:19 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				average;
	bool				cheap;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

//MOVES
void			sa(t_stack_node **stack, bool print);
void			sb(t_stack_node **stackb, bool print);
void			ss(t_stack_node **stack, t_stack_node **stackb, bool print);
void			pa(t_stack_node **a, t_stack_node **b, bool manifest);
void			pb(t_stack_node **b, t_stack_node **a, bool manifest);
void			ra(t_stack_node **a, bool print);
void			rb(t_stack_node **b, bool print);
void			rr(t_stack_node **a, t_stack_node **b, bool print);
void			rra(t_stack_node **a, bool print);
void			rrb(t_stack_node **b, bool print);
void			rrr(t_stack_node **a, t_stack_node **b, bool print);

//UTILS
int				stack_len(t_stack_node *stack);
t_stack_node	*find_last_item(t_stack_node *stack);
int				stack_len(t_stack_node *stack);
bool			is_sorted(t_stack_node *stack);
t_stack_node	*find_min(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);
char			**split(char *s, char c);
void			print_stack(t_stack_node *stack, char *name);
void			free_split_leak(char **split);

//ERRORS
int				err_syntax(char	*str);
int				err_duplicate(t_stack_node *a, int i);
void			free_stack(t_stack_node **stack);
void			free_err(t_stack_node **a);

//NODES INIT
void			init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*get_cheap_item(t_stack_node *stack);
void			ready_to_push(t_stack_node **s, t_stack_node *top, char name);
void			current_index(t_stack_node *stack);
void			cheapest(t_stack_node *list);
void			init_node_a(t_stack_node *a, t_stack_node *b);
void			init_node_b(t_stack_node *a, t_stack_node *b);

//ALGORITHM (TURK)
void			sort_three_elem(t_stack_node **a);
void			sort_stacks(t_stack_node **a, t_stack_node **b);

#endif
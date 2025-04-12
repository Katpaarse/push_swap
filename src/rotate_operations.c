/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kat <kat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:05:27 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/10 20:57:20 by kat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;
	
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	*stack = first->next;
	first->next = NULL;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	rotate_a(t_node **stack_a, t_node **stack_b)
{
	(void)stack_b;
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rotate_b(t_node **stack_a, t_node **stack_b)
{
	(void)stack_a;
	rotate(stack_b);
	ft_printf("rb\n");
}

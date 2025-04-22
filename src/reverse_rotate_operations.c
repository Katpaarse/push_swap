/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:22:41 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/22 14:55:01 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*prev;
	t_node	*last;
	
	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	if (prev)
		prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	reverse_rotate_a(t_node **stack_a, t_node **stack_b)
{
	(void)stack_b;
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_node **stack_a, t_node **stack_b)
{
	(void)stack_a;
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	reverse_rotate_both(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}

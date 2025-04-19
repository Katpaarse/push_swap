/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kat <kat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:06:28 by kat               #+#    #+#             */
/*   Updated: 2025/04/20 01:45:47 by kat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sorting_two_numbers(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		swap_a(*stack_a, NULL);
}

void	sorting_three_numbers(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;

	if (a > b && b > c)
	{
		swap_a(*stack_a, NULL);
		reverse_rotate_a(stack_a, NULL);
	}
	else if (a > c && c > b)
		rotate_a(stack_a, NULL);
	else if (b > a && a > c)
		reverse_rotate_a(stack_a, NULL);
	else if (a > b && b < c && a < c)
		swap_a(*stack_a, NULL);
	else if (a < b && b > c && a < c)
	{
		swap_a(*stack_a, NULL);
		rotate_a(stack_a, NULL);
	}
}
void	sorting_five_numbers(t_node **stack_a, t_node **stack_b)
{
	int	pushed;

	pushed = 0;
	while (pushed < 2)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
		{
			push_b(stack_a, stack_b);
			pushed++;
		}
		else
			rotate_a(stack_a, NULL);
	}
	sorting_three_numbers(stack_a);
	if ((*stack_b)->index < (*stack_b)->next->index)
		swap_b(*stack_a, NULL);
	push_a(stack_b, stack_a);
	push_a(stack_b, stack_a);	
}

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

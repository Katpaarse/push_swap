/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:06:28 by kat               #+#    #+#             */
/*   Updated: 2025/04/22 14:40:10 by jukerste         ###   ########.fr       */
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
	int		pushed;
	t_node	*smallest;

	pushed = 0;
	while (pushed < 2 && *stack_a)
	{
		smallest = find_smallest_index(*stack_a);
		while (*stack_a != smallest)
			rotate_a(stack_a, NULL);
		push_b(stack_a, stack_b);
		pushed++;	
	}
	if (*stack_a)
		sorting_three_numbers(stack_a);
	while (*stack_b)
	{
		while (*stack_a && (*stack_a)->index < (*stack_b)->index && (*stack_a)->next)
			rotate_a(stack_a, NULL);
		if (*stack_a && (*stack_a)->index < (*stack_b)->index && !(*stack_a)->next)
			rotate_a(stack_a, NULL);
		push_a(stack_b, stack_a);
	}
}

t_node	*find_smallest_index(t_node *stack)
{
	t_node *smallest_node;
	t_node *current;
	
	smallest_node = stack;
	current = stack->next;
	if (stack == NULL)
		return (NULL);
	while (current)
	{
		if (current->index < smallest_node->index)
			smallest_node = current;
		current = current->next;
	}
	return (smallest_node);
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

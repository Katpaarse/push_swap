/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:06:28 by kat               #+#    #+#             */
/*   Updated: 2025/04/30 16:21:15 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_two_numbers(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		swap_a(*stack_a, NULL);
}

void	sort_three_numbers(t_node **stack_a)
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

void	sort_four_numbers(t_node **stack_a, t_node **stack_b)
{
	t_node	*smallest;
	int		place;
	int		size;

	if (is_sorted(*stack_a))
		return ;
	smallest = find_smallest_index(*stack_a);
	place = find_position(*stack_a, smallest);
	size = stack_size(*stack_a);
	if (place <= size / 2)
		while (*stack_a != smallest)
			rotate_a(stack_a, NULL);
	else
		while (*stack_a != smallest)
			reverse_rotate_a(stack_a, NULL);
	push_b(stack_a, stack_b);
	sort_three_numbers(stack_a);
	push_a(stack_b, stack_a);
}

void	sort_five_numbers(t_node **stack_a, t_node **stack_b)
{
	int		pushed;
	t_node	*smallest;
	int		place;
	int		size;

	pushed = 0;
	while (pushed < 2 && *stack_a)
	{
		smallest = find_smallest_index(*stack_a);
		place = find_position(*stack_a, smallest);
		size = stack_size(*stack_a);
		if (place <= size / 2)
			while (*stack_a != smallest)
				rotate_a(stack_a, NULL);
		else
			while (*stack_a != smallest)
				reverse_rotate_a(stack_a, NULL);
		push_b(stack_a, stack_b);
		pushed++;
	}
	if (*stack_a)
		sort_three_numbers(stack_a);
	while (*stack_b)
		push_a(stack_b, stack_a);
}

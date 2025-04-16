/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:06:28 by kat               #+#    #+#             */
/*   Updated: 2025/04/16 16:52:12 by jukerste         ###   ########.fr       */
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

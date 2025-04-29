/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:08:07 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/29 15:42:27 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	max_bits;
	int	i;
	int	pushed;
	int	processed;
	int	num;
	int size;

	size = stack_size(*stack_a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		pushed = 0;
		processed = 0;
		while (processed < size)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 0)
			{
				push_b(stack_a, stack_b);
				pushed++;
			}
			else
				rotate_a(stack_a, NULL);
			processed++;
		}
		while (pushed > 0)
		{
			push_a(stack_b, stack_a);
			pushed--;
		}
		i++;
	}
}

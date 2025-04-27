/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:08:07 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/27 21:06:03 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	max_num;
	int	max_bits;
	int	i;
	int	size;
	int	num;
	int current_size;

	size = stack_size(*stack_a);
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		current_size = size;
		while (current_size > 0)
		{
			if (*stack_a == NULL)
				break ;
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 0)
				push_b(stack_b, stack_a);
			else
				rotate_a(stack_a, NULL);
			current_size--;
		}
		while (stack_size(*stack_b) > 0)
			push_a(stack_a, stack_b);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:08:07 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/29 15:33:28 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int	max_bits;
	int	i;
	int	j;
	int	num;
	int size;

	size = stack_size(*stack_a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 0)
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a, NULL);
			j++;
		}
		while (*stack_b)
			push_a(stack_b, stack_a);
		i++;
	}
}

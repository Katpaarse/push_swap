/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:50 by kat               #+#    #+#             */
/*   Updated: 2025/04/27 19:45:01 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (1);
	stack_a = make_stack_a(argv + 1);
	if (stack_a == NULL)
	{
		write(2, "Error\n", 6);
		free_list(stack_a);
		return (1);
	}
	assign_index(stack_a);
	print_stack(stack_a);
	size = stack_size(stack_a);
	if (is_sorted(stack_a))
	{
		ft_printf("Stack already sorted\n");
		free_list(stack_a);
		return (0);
	}
	if (size == 2)
		sort_two_numbers(&stack_a);
	else if (size == 3)
		sort_three_numbers(&stack_a);
	else if (size == 4)
		sort_four_numbers(&stack_a, &stack_b);
	else if (size == 5)
		sort_five_numbers(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	ft_printf("Sorted stack:\n");
	print_stack(stack_a);
	free_list(stack_a);
	return (0);
}

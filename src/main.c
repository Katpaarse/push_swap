/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:50 by kat               #+#    #+#             */
/*   Updated: 2025/04/19 18:03:30 by jukerste         ###   ########.fr       */
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
		return (-1);
	stack_a = make_stack_a(argv + 1);
	if (stack_a == NULL)
		return (write(2, "Error\n", 6), -1);
	print_stack(stack_a);
	size = stack_size(stack_a);
	if (is_sorted(stack_a))
	{
		ft_printf("Stack already sorted\n");
		free_and_exit(stack_a);
		return (0);
	}
	if (size == 2)
		sorting_two_numbers(&stack_a);
	else if (size == 3)
		sorting_three_numbers(&stack_a);
	else if (size == 4)
		sorting_five_numbers(&stack_a, &stack_b);
	else
	{
		write(2, "Radix not implemented yet\n", 27);
		free_and_exit(stack_a);
		return (-1);
	}
	ft_printf("Sorted stack:\n");
	print_stack(stack_a);
	free_and_exit(stack_a);
	return (0);
}

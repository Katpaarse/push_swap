/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:50:30 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/29 15:34:33 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stacks(t_node *stack_a, t_node *stack_b)
{
	ft_printf("stack a: \n=====\n");
	print_stack(stack_a);
	ft_printf("-----\n\n");
	ft_printf("stack b: \n=====\n");
	print_stack(stack_b);
	ft_printf("-----\n\n");
}

void	print_stack(t_node *stack)
{
	while (stack)
	{
	ft_printf("%i\n", stack->value);
		stack = stack->next;
	}
}

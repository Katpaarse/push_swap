/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:25:09 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/29 18:24:27 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_node *stack)
{
	int	temp_value;
	int	temp_index;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp_value = stack->value;
	temp_index = stack->index;
	stack->value = stack->next->value;
	stack->index = stack->next->index;
	stack->next->value = temp_value;
	stack->next->index = temp_index;
}

void	swap_a(t_node *stack_a, t_node *stack_b)
{
	(void)stack_b;
	swap(stack_a);
	ft_printf("sa\n");
}

void	swap_b(t_node *stack_a, t_node *stack_b)
{
	(void)stack_a;
	swap(stack_b);
	ft_printf("sb\n");
}

void	swap_swap(t_node *stack_a, t_node *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

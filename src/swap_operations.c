/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kat <kat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:25:09 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/10 20:56:50 by kat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_node *stack)
{
	int temp;
	
	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
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

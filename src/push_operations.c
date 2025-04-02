/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 17:20:23 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/02 19:09:46 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_node *stack_a, t_node *stack_b)
{
	t_node *temp;

	if (stack_a == NULL || stack_b == NULL)
		return ;
	temp = stack_a->next;
	stack_b = stack_a->next;
}
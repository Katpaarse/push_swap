/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:05:41 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/29 18:29:07 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*make_stack_a(char **argv)
{
	int		i;
	long	num;
	t_node	*head;
	t_node	*new_node;

	head = NULL;
	i = 0;
	while (argv[i])
	{
		if (is_valid_number(argv[i]) == -1)
			return (NULL);
		num = ft_atoi(argv[i]);
		if (check_duplicate_numbers(head, num))
			return (NULL);
		new_node = ft_lstnew_ps((int)num);
		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		ft_lstadd_back_ps(&head, new_node);
		i++;
	}
	return (head);
}

int	stack_size(t_node *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	assign_index(t_node *stack)
{
	t_node	*current;
	t_node	*compare;
	int		i;

	current = stack;
	while (current)
	{
		i = 0;
		compare = stack;
		while (compare)
		{
			if (compare->value < current->value)
				i++;
			compare = compare->next;
		}
		current->index = i;
		current = current->next;
	}
}

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

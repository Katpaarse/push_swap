/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:16:33 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/30 15:42:21 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*ft_lstnew_ps(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back_ps(t_node **lst, t_node *new)
{
	t_node	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

void	free_list(t_node *head)
{
	t_node	*temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

t_node	*find_smallest_index(t_node *stack)
{
	t_node	*smallest_node;
	t_node	*current;

	smallest_node = stack;
	current = stack->next;
	if (stack == NULL)
		return (NULL);
	while (current)
	{
		if (current->index < smallest_node->index)
			smallest_node = current;
		current = current->next;
	}
	return (smallest_node);
}

int	find_position(t_node *stack, t_node *target)
{
	int	place;

	place = 0;
	while (stack && stack != target)
	{
		stack = stack->next;
		place++;
	}
	return (place);
}

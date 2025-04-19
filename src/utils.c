/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 14:05:41 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/19 18:16:47 by jukerste         ###   ########.fr       */
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
		new_node = ft_lstnew_ps((int)num);
		if (new_node == NULL)
			free_and_exit(head);
		ft_lstadd_back_ps(&head, new_node);
		i++;
	}
	return (head);
}

void	free_and_exit(t_node *head)
{
	t_node	*temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	exit(-1);
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
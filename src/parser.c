/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kat <kat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:15:53 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/30 18:15:19 by kat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_number(char *str)
{
	int		i;
	long	num;

	i = 0;
	if (str == NULL || str[i] == '\0')
		return (write(2, "Error\n", 6), -1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (write(2, "Error\n", 6), -1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (write(2, "Error\n", 6), -1);
		i++;
	}
	num = ft_atol(str);
	if (num < INT_MIN || num > INT_MAX)
		return (write(2, "Error\n", 6), -1);
	return (0);
}

int	check_duplicate_numbers(t_node *head, int num)
{
	t_node	*current;

	current = head;
	while (current != NULL)
	{
		if (current->value == num)
			return (write(2, "Error\n", 6), -1);
		current = current->next;
	}
	return (0);
}

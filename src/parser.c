/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:15:53 by jukerste          #+#    #+#             */
/*   Updated: 2025/05/07 16:08:38 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_number(char *str)
{
	int		i;
	long	num;

	if (str == NULL || str[0] == '\0')
		return (write(2, "Error\n", 6), -1);
	i = 0;
	if ((str[i] == '+') || (str[i] == '-' && str[i + 1] == '\0'))
		return (write(2, "Error\n", 6), -1);
	if (str[i] == '-' && str[i + 1] == '0' && str[i + 2] == '\0')
		return (write(2, "Error\n", 6), -1);
	if (str[i] == '-')
		i++;
	if (str[i] == '0' && str[i + 1] != '\0')
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

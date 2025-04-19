/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:15:53 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/19 17:36:04 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_number(char *str)
{
	long long	num;
	char		*str2;

	if (str[0] == '\0')
		return (-1);
	num = ft_atoi(str);
	str2 = ft_itoa(num);
	if (ft_strncmp(str, str2, ft_strlen(str)) != 0)
		return (-1);
	return (0);
}

int	check_duplicate_numbers(t_node *head, int num)
{
	t_node *current;
	
	current = head;
	while (current != NULL)
	{
		if (current->value == num)
			return (-1);
		current = current->next;
	}
	return (0);
}

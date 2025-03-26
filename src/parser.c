/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kat <kat@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 15:15:53 by jukerste          #+#    #+#             */
/*   Updated: 2025/03/26 11:53:57 by kat              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_valid_number(char *str)
{
	int		i;
	long	num;

	i = 0;
	if (str[i] == '\0')
		return (write(2, "Error\n", 6), 1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0') // check for a number after the sign
		return (write(2, "Error\n", 6), 1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (write(2, "Error\n", 6), 1);
		i++;
	}
	num = ft_atoi(str); // test if this works with under/overflow
	if (num < INT_MIN || num > INT_MAX)
		return (write(2, "Error\n", 6), 1);
	return (0);
}

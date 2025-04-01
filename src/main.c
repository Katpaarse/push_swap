/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:50 by kat               #+#    #+#             */
/*   Updated: 2025/04/01 18:01:54 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	
	if (argc < 2)
		return (1);
	stack_a = make_stack_a(argv + 1);
	if (stack_a == NULL)
		return (write(2, "Error\n", 6), 1);

	// sorting logic gaat hierzo.
	free_lst(stack_a);
	// return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:21:50 by kat               #+#    #+#             */
/*   Updated: 2025/03/25 15:23:14 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int main(int argc, char **argv)
{
	t_stack a;
	t_stack b;

	a.top = NULL;
	a.size  = 0;
	
	b.top = NULL;
	b.size = 0;
	
	if (argc < 2)
		return (0);

	is_valid_number(argv[1]);
}

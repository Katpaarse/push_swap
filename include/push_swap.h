/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:57:29 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/01 18:03:05 by jukerste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include "../src/libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

int		is_valid_number(char *str);
int		check_duplicate_numbers(t_node *head, int num);
t_node	*ft_lstnew_ps(int value);
void	ft_lstadd_back_ps(t_node **lst, t_node *new);
t_node	*make_stack_a(char **argv);
void	free_lst(t_node *head);

#endif

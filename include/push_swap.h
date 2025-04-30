/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukerste <jukerste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:57:29 by jukerste          #+#    #+#             */
/*   Updated: 2025/04/30 16:20:11 by jukerste         ###   ########.fr       */
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
int		stack_size(t_node *stack);
void	free_list(t_node *head);
void	assign_index(t_node *stack);
void	print_stack(t_node *stack);
void	print_stacks(t_node *stack_a, t_node *stack_b);
void	swap(t_node *stack);
void	swap_a(t_node *stack_a, t_node *stack_b);
void	swap_b(t_node *stack_a, t_node *stack_b);
void	swap_swap(t_node *stack_a, t_node *stack_b);
void	push(t_node **src, t_node **dest);
void	push_a(t_node **stack_b, t_node **stack_a);
void	push_b(t_node **stack_a, t_node **stack_b);
void	rotate(t_node **stack);
void	rotate_a(t_node **stack_a, t_node **stack_b);
void	rotate_b(t_node **stack_a, t_node **stack_b);
void	reverse_rotate(t_node **stack);
void	reverse_rotate_a(t_node **stack_a, t_node **stack_b);
void	reverse_rotate_b(t_node **stack_a, t_node **stack_b);
void	reverse_rotate_both(t_node **stack_a, t_node **stack_b);
void	sort_two_numbers(t_node **stack_a);
void	sort_three_numbers(t_node **stack_a);
void	sort_four_numbers(t_node **stack_a, t_node **stack_b);
void	sort_five_numbers(t_node **stack_a, t_node **stack_b);
int		is_sorted(t_node *stack);
void	radix_sort(t_node **stack_a, t_node **stack_b);
void	radix_pass(t_node **stack_a, t_node **stack_b, int bit, int size);
int		find_max_bits(int size);
t_node	*find_smallest_index(t_node *stack);
int		find_position(t_node *stack, t_node *target);
void	choose_sorting(t_node **stack_a, t_node **stack_b, int size);

#endif

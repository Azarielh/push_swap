/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:38 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 20:10:57 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file push_swap.h
 * @brief Header file for the push_swap project.
 * 
 * This file contains the function prototypes and type definitions for the
 * push_swap project, which implements a sorting algorithm for a stack of 
 * integers.
 * 
 * @author jlacaze-
 * @date Created on: 2025/03/13
 * @date Updated on: 2025/03/13
 */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_piles
{
	int		len_a;
	int		len_b;
	int		maxlen;
	int		*pos_target;
	int		*pile_a;
	int		*pile_b;
	int		max;
	int		min;
}			t_piles;

int		is_valid_int_list(char **pile_base, int argc);
int		is_sorted(t_piles *piles);
int		init_pile(char **args, t_piles *piles, int argc);
void	print_pile_a(t_piles *piles);
void	print_pile_b(t_piles *piles);
int		exit_error(char *error_msg, t_piles *piles);
int		normalize(t_piles *pile);
void	exception_handler(int argc, t_piles *piles);
int		get_lowest_pos(t_piles *piles);
int		get_highest_pos(t_piles *piles);
void	sort(t_piles *piles);
void	sort_three(t_piles *piles);
void	sort_four(t_piles *piles);
void	sort_five(t_piles *piles);
void	swap_a(t_piles *piles, int do_print);
void	swap_b(t_piles *piles, int do_print);
void	double_swap(t_piles *piles);
void	push_a(t_piles *piles, int do_print);
void	push_b(t_piles *piles, int do_print);
void	rotate_a(t_piles *piles, int do_print);
void	rotate_b(t_piles *piles, int do_print);
void	reverse_rotate_a(t_piles *piles, int do_print);
void	reverse_rotate_b(t_piles *piles, int do_print);
void	double_reverse(t_piles *piles);
void	double_rotate(t_piles *piles);
void	radix_sort(t_piles *piles);
void	sort_by_bit_optimized(t_piles *piles, int bit_pos);
int		count_bits(int nb);
int		pick_binary(int nb, int pos);

#endif

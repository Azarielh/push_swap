/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:38 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 17:32:26 by jlacaze-         ###   ########.fr       */
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
# include "./libft.h"

typedef struct s_piles
{
	size_t	len_a;
	size_t	len_b;
	int		*pile_a;
	int		*pile_b;
	int		max;
	int		min;
}			t_piles;

/**
 *@brief check if list is valid
 *
*/
int	is_valid_int_list(char **pile_base, int argc);
int	init_pile(char **args, t_piles *piles);
int	exit_error(char *error_msg);
int	ft_push(char *to_add, t_piles *piles, int len);
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:41:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/21 23:22:52 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_2min_to_b(t_piles *piles);

void	sort_five(t_piles *piles)
{
	push_2min_to_b(piles);
	sort_three(piles);
}

static void	push_2min_to_b(t_piles *piles)
{
	int	min_pos;

	min_pos = get_lowest_pos(piles);
	if (min_pos <= 2)
		while (min_pos-- > 0)
			rotate_a(piles, TRUE);
	if (min_pos > 2)
		while (min_pos++ <= piles->len_a - 1)
			reverse_rotate_a(piles, TRUE);
	push_b(piles, TRUE);
	min_pos = get_lowest_pos(piles);
	if (min_pos <= 2)
		while (min_pos-- > 0)
			rotate_a(piles, TRUE);
	if (min_pos > 2)
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	push_b(piles, TRUE);
}

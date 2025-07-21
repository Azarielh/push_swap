/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 01:06:47 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:51:08 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_four(t_piles *piles)
{
	int	min_pos;
	// ft_printf("sort_four\n");
	min_pos = get_lowest_pos(piles);
	ft_printf("min_pos: %d\n", min_pos);
	if (min_pos <= 1)
	{
		while (min_pos-- > 0)
			rotate_a(piles, TRUE);
	}
	else if (min_pos > 1)
	{
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	}
	if (is_sorted(piles))
	{
		while (piles->len_a < piles->maxlen)
			push_a(piles, TRUE);
		return ;
	}
	push_b(piles, TRUE);
	sort_three(piles);
	}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:41:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:52:33 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_piles *piles)
{
	int	min_pos;

	min_pos = get_lowest_pos(piles);
	if (min_pos <= 2)
	{
		while (min_pos-- > 0)
			rotate_a(piles, TRUE);
	}
	else
	{
		int count = piles->len_a - min_pos;
		while (count-- > 0)
			reverse_rotate_a(piles, TRUE);
	}
	push_b(piles, TRUE);
	sort_four(piles);
	push_a(piles, TRUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 05:18:14 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/22 00:19:29 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_piles *piles)
{
	int	h_pos;
	int	l_pos;

	h_pos = get_highest_pos(piles);
	l_pos = get_lowest_pos(piles);
	if (l_pos == 0 && h_pos == 1)
	{
		swap_a(piles, TRUE);
		rotate_a(piles, TRUE);
	}
	else if (l_pos == 1 && h_pos == 2)
		swap_a(piles, TRUE);
	if (l_pos == 2 && h_pos == 1)
		reverse_rotate_a(piles, TRUE);
	else if (l_pos == 1 && h_pos == 0)
		rotate_a(piles, TRUE);
	else if (l_pos == 2 && h_pos == 0)
	{
		rotate_a(piles, TRUE);
		swap_a(piles, TRUE);
	}
	if (is_sorted(piles))
		while (piles->len_a < piles->maxlen)
			push_a(piles, TRUE);
}

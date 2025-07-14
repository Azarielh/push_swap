/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 05:18:14 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 00:00:52 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_three(t_piles *piles)
{
	int	h_pos;
	int	l_pos;

	h_pos = get_highest_pos(piles);
	l_pos = get_lowest_pos(piles);
	if (h_pos == 0 && l_pos == 1)
		rotate_a(piles, TRUE);
	if (h_pos == 0 && l_pos == 2)
	{
		swap_a(piles, TRUE);
		reverse_rotate_a(piles, TRUE);
	}
	if ((h_pos == 1 && l_pos == 0))
	{
		reverse_rotate_a(piles, TRUE);
		swap_a(piles, TRUE);
	}
	if (h_pos == 1 && l_pos == 2)
		reverse_rotate_a(piles, TRUE);
	if (h_pos == 2 && l_pos == 1)
		swap_a(piles, TRUE);
}

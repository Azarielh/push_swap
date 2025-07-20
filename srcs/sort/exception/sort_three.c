/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 05:18:14 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:50:56 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_piles *piles)
{
	int	h_pos;
	int	l_pos;

	if (is_sorted(piles))
		return ;

	h_pos = get_highest_pos(piles);
	l_pos = get_lowest_pos(piles);

	if (h_pos == 0 && l_pos == 1)
		rotate_a(piles, TRUE); // Cas B
	else if (h_pos == 0 && l_pos == 2)
	{
		swap_a(piles, TRUE);   // Cas A
		reverse_rotate_a(piles, TRUE);
	}
	else if (h_pos == 1 && l_pos == 0)
		swap_a(piles, TRUE);   // Cas C
	else if (h_pos == 1 && l_pos == 2)
		reverse_rotate_a(piles, TRUE); // Cas D
	else if (h_pos == 2 && l_pos == 0)
	{
		swap_a(piles, TRUE);   // Cas E
		rotate_a(piles, TRUE);
	}
}

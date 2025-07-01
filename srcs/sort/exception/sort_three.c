/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 05:18:14 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/01 16:36:45 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_three(t_piles *piles)
{
	int	h_pos;
	int	l_pos;
	int	i;

	h_pos = get_highest_pos(piles);
	l_pos = get_lowest_pos(piles);
	if ((h_pos == 0 && l_pos == 2) || (h_pos == 2 && l_pos == 0))
		rotate_a(piles);
	if ()
}

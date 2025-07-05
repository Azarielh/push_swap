/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 01:06:47 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:03:37 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_four(t_piles *piles)
{
	int	min_pos ;

	min_pos = get_lowest_pos(piles);
	if (min_pos == 1)
		rotate_a(piles, TRUE);
	else if (min_pos == 2 || min_pos == 3)
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	push_b(piles, TRUE);
	sort_three(piles);
	push_a(piles, TRUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:41:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 05:48:31 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_five(t_piles *piles)
{
	int	min_pos ;

	min_pos = get_lowest_pos(piles);
	if (min_pos > 0 && min_pos <= 2)
		while (0 <= min_pos-- && min_pos <= 2)
			rotate_a(piles, TRUE);
	else if (min_pos == 3 || min_pos == 4)
		while (min_pos++ < piles->len_a - 1)
			reverse_rotate_a(piles, TRUE);
	push_b(piles, TRUE);
	sort_four(piles);
	push_a(piles, TRUE);
}

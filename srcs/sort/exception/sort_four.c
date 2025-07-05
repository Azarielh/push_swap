/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 01:06:47 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 00:00:25 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_four(t_piles *piles)
{
	int	min_pos ;
	int	min ;

	min_pos = get_lowest_pos(piles);
	min = piles->min;
	ft_printf("min = %d\nmin_pos = %d\n", min, min_pos);
	if (min_pos == 1)
		rotate_a(piles, TRUE);
	else if (min_pos == 2 || min_pos == 3)
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	// print_pile_a(piles);

	push_b(piles->pile_a[0], piles);
	print_pile_a(piles);

	sort_three(piles);
	push_a(piles->pile_b[0], piles, TRUE);
	print_pile_a(piles);
}

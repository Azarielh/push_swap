/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:01:33 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 03:09:07 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void sort(t_piles *piles)
{
	int i;
	int j;
	int highest;
	int len;

	i = 0;
	j = 0;
	highest = get_highest_pos(piles);
	len = count_bits(highest) + 1;
	ft_printf("highest is = %d   ---   len is = %d\n", highest, len);
	while (++j < len)
	{
		ft_printf(BLUE "pick_binary(piles->pile_a[0](" RED "%d" BLUE "), j(" RED "%d" BLUE "))returned = " RED "%d\n" RESET, piles->pile_a[0], j, pick_binary(piles->pile_a[0], j));
		while (++i < piles->len_a)
		{
			if (pick_binary(piles->pile_a[0], j) == 1)
				rotate_a(piles, TRUE);
			else
				push_b(piles->pile_a[0], piles);
		}
		print_pile_a(piles);
		while (piles->len_b > 0)
			push_a(piles->pile_b[0], piles, TRUE);
		i = -1;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 01:06:47 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 02:16:21 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	sort_four(t_piles *piles)
{
	int	h_pos;
	int	l_pos;

	ft_printf("sort_four a is here.\n");
	h_pos = get_highest_pos(piles);
	l_pos = get_lowest_pos(piles);

	if (h_pos == 0)
	{
		if (l_pos == 1 && piles->pile_a[2] < piles->pile_a[3])
			reverse_rotate_a(piles, TRUE);
		if (l_pos == 1 && piles->pile_a[2] > piles->pile_a[3])
		{
			reverse_rotate_a(piles, TRUE);
			swap_a(piles, TRUE);
			rotate_a(piles, TRUE);
			swap_a(piles, TRUE);
		}
		if (l_pos == 2 && piles->pile_a[1] < piles->pile_a[3])
		{
			rotate_a(piles, TRUE);
			swap_a(piles, TRUE);
		}
		if (l_pos == 2 && piles->pile_a[1] > piles->pile_a[3])
		{
			swap_a(piles, TRUE);
			rotate_a(piles, TRUE);
			rotate_a(piles, TRUE);
		}
		if (l_pos == 3 && piles->pile_a[1] > piles->pile_a[2])
		{
			swap_a(piles, TRUE);
			rotate_a(piles, TRUE);
			rotate_a(piles, TRUE);
			swap_a(piles, TRUE);
		}

	}
}

/*
1234  1243  1324  1342  1423  1432
2134  2143  2314  2341  2413  2431
3124  3142  3214  3241  3412  3421

  4231 >> pb = 231 >> reverse = 123 >> pa = 4123 >> rotate
  4321 >> swap = 3421 >> reverse * 2 = 2134

Done :
4123 4132 4213 4312
*/
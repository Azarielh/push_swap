/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 00:01:33 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:50:25 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_piles *piles)
{
	int	bit;
	int	max_bits;
	int	size;
	int	i;

	max_bits = count_bits(piles->len_a - 1);
	bit = 0;
	while (bit < max_bits)
	{
		size = piles->len_a;
		i = 0;
		while (i < size)
		{
			if (((piles->pile_a[0] >> bit) & 1) == 0)
				push_b(piles, TRUE);
			else
				rotate_a(piles, TRUE);
			i++;
		}
		while (piles->len_b > 0)
			push_a(piles, TRUE);
		bit++;
	}
}

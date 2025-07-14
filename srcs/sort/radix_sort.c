/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:30:00 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 18:53:22 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	radix_sort(t_piles *piles)
{
	int	max_bits;
	int	bit_pos;

	normalize(piles);
	max_bits = count_bits(piles->len_a - 1);
	bit_pos = 0;
	while (bit_pos < max_bits)
	{
		sort_by_bit_optimized(piles, bit_pos);
		bit_pos++;
	}
}

void	sort_by_bit_optimized(t_piles *piles, int bit_pos)
{
	int	size;
	int	i;

	size = piles->len_a;
	i = 0;
	while (i < size)
	{
		if (pick_binary(piles->pile_a[0], bit_pos + 1) == 0)
			push_b(piles, TRUE);
		else
			rotate_a(piles, TRUE);
		i++;
	}
	while (piles->len_b > 0)
		push_a(piles, TRUE);
}

// int	get_bit(int number, int bit_pos)
// {
// 	return ((number >> bit_pos) & 1);
// }

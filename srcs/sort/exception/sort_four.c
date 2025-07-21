/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 01:06:47 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:51:08 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void printpiles(t_piles *piles);
// static int issorted_aft_swap(t_piles *piles);

void	sort_four(t_piles *piles)
{
	int	min_pos;
	// ft_printf("sort_four\n");
	min_pos = get_lowest_pos(piles);
	// ft_printf("min_pos: %d\n", min_pos);
	// printpiles(piles);
	if (min_pos <= 1)
	{
		while (min_pos-- > 0)
			rotate_a(piles, TRUE);
	}
	else if (min_pos > 1)
	{
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	}
	// printpiles(piles);
	if (is_sorted(piles))
		return ;
	push_b(piles, TRUE);
	sort_three(piles);
}

//TEST 1 ARG:1 3 0 2 
// TEST 2 ARG:1 2 3 0 
// TEST 3 ARG:0 2 3 1 
// TEST 5 ARG:3 1 0 2


// static void printpiles(t_piles *piles)
// {
// 	ft_printf("Pile A: ");
// 	for (int i = 0; i < piles->len_a; i++)
// 		ft_printf("%d ", piles->pile_a[i]);
// 	ft_printf("\nPile B: ");
// 	for (int i = 0; i < piles->len_b; i++)
// 		ft_printf("%d ", piles->pile_b[i]);
// 	ft_printf("\n");
// }

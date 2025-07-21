/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:41:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:52:33 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void minmax_at_end(t_piles *piles, int *p_a);
static void push_2min_to_b(t_piles *piles);

void sort_five(t_piles *piles, int *p_a)
{
(void)p_a;
push_2min_to_b(piles);
sort_three(piles);
}

static void push_2min_to_b(t_piles *piles)
{
int min_pos;

min_pos = get_lowest_pos(piles);
if (min_pos <= 3)
while (min_pos-- > 0)
rotate_a(piles, TRUE);
if (min_pos > 3)
while (min_pos++ < piles->len_a - 1)
reverse_rotate_a(piles, TRUE);
push_b(piles, TRUE);
min_pos = get_lowest_pos(piles);
if (min_pos <= 2)
while (min_pos-- > 0)
rotate_a(piles, TRUE);
if (min_pos > 2)
while (min_pos++ < piles->len_a)
reverse_rotate_a(piles, TRUE);
push_b(piles, TRUE);
}

// void	sort_five(t_piles *piles, int *p_a)
// {
// 	int	min_pos;
// 	int max_pos;
// 	(void) p_a;
// 	min_pos = get_lowest_pos(piles);
// 	max_pos = get_highest_pos(piles);
// 	if (min_pos <= 3 && max_pos <= 3)
// 	{
// 		push_2min_to_b(piles);
// 		sort_three(piles);
// 		return ;
// 	}
// 	else if (min_pos >= piles->len_a - 3 && max_pos >= piles->len_a - 3)
// 	{
// 		minmax_at_end(piles, p_a);
// 		return ;
// 	}

// }

// static void push_2min_to_b(t_piles *piles)
// {
// 	int	min_pos;

// 	min_pos = get_lowest_pos(piles);
// 	ft_printf("min_pos: %d\n", min_pos);
// 	if (min_pos <= 3)
// 		while (min_pos-- > 0)
// 			rotate_a(piles, TRUE);
// 	if (min_pos > 3)
// 		while (min_pos++ < piles->len_a - 1)
// 			reverse_rotate_a(piles, TRUE);
// 	push_b(piles, TRUE);
// 	min_pos = get_lowest_pos(piles);
// 	ft_printf("min_pos: %d\n", min_pos);
// 	if (min_pos <= 2)
// 		while (min_pos-- > 0)
// 			rotate_a(piles, TRUE);
// 	if (min_pos > 2)
// 		while (min_pos++ < piles->len_a)
// 			reverse_rotate_a(piles, TRUE);
// 	push_b(piles, TRUE);
// 	printpiles(piles);
// }

// static void minmax_at_end(t_piles *piles, int *p_a)
// {
// 		(void) p_a;

// 		if (p_a[0] > p_a[1])
// 	{
// 		swap_a(piles, TRUE);
// 		reverse_rotate_a(piles, TRUE);
// 		reverse_rotate_a(piles, TRUE);
// 		swap_a(piles, TRUE);
// 		rotate_a(piles, TRUE);
// 		return ;
// 	}
// 	else if (p_a[0] < p_a[1])
// 	{
// 		reverse_rotate_a(piles, TRUE);
// 		reverse_rotate_a(piles, TRUE);
// 		swap_a(piles, TRUE);
// 		rotate_a(piles, TRUE);
// 	}
// }

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

	// if (min_pos <= 2)
	// {
	// 	while (min_pos-- > 0)
	// 		rotate_a(piles, TRUE);
	// }
	// else
	// {
	// 	int count = piles->len_a - min_pos;
	// 	while (count-- > 0)
	// 		reverse_rotate_a(piles, TRUE);
	// }
	// push_b(piles, TRUE);
	// sort_four(piles);
	// push_a(piles, TRUE);
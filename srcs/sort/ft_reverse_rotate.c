/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:30:23 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:49:56 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_piles *piles, int do_print)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_a;
	first = piles->pile_a[0];
	last = piles->pile_a[len - 1];
	while (first != last && len >= 0)
	{
		piles->pile_a[len] = piles->pile_a[len - 1];
		len--;
	}
	piles->pile_a[0] = last;
	if (do_print == TRUE)
		ft_printf("rra\n");
}

void	reverse_rotate_b(t_piles *piles, int do_print)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_b;
	first = piles->pile_b[0];
	last = piles->pile_b[len - 1];
	while (first != last && len-- > 0)
	{
		piles->pile_b[len] = piles->pile_b[len - 1];
	}
	piles->pile_b[0] = last;
	if (do_print == TRUE)
		ft_printf("rrb\n");
}

void	double_reverse(t_piles *piles)
{
	reverse_rotate_a(piles, FALSE);
	reverse_rotate_b(piles, FALSE);
	ft_printf("rrr\n");
}

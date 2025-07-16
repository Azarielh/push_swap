/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:30:23 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:50:02 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_piles *piles, int do_print)
{
	int	first;
	int	len;

	len = 0;
	first = piles->pile_a[0];
	while (len < piles->len_a)
	{
		piles->pile_a[len] = piles->pile_a[len + 1];
		len++;
	}
	piles->pile_a[piles->len_a - 1] = first;
	if (do_print == TRUE)
		ft_printf("ra\n");
}

void	rotate_b(t_piles *piles, int do_print)
{
	int	first;
	int	len;

	len = piles->len_b;
	first = piles->pile_b[0];
	while (len < piles->len_b)
	{
		piles->pile_b[len] = piles->pile_b[len + 1];
		len++;
	}
	piles->pile_a[piles->len_b - 1] = first;
	if (do_print == TRUE)
		ft_printf("rb\n");
}

void	double_rotate(t_piles *piles)
{
	rotate_a(piles, FALSE);
	rotate_b(piles, FALSE);
	ft_printf("rr\n");
}

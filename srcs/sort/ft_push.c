/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:28:22 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:26:26 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(int value, t_piles *piles, int do_print)
{
	int i;

	if (piles->len_a >= piles->maxlen)
		exit_error("pile A is full, impossible to push a new element.\n");
	i = piles->len_a;
	while (i > 0)
	{
		piles->pile_a[i] = piles->pile_a[i - 1];
		i--;
	}
	piles->pile_a[0] = value;
	piles->len_a++;
	if (piles->len_b > 0)
	{
		i = 0;
		while (i < piles->len_b - 1)
		{
			piles->pile_b[i] = piles->pile_b[i + 1];
			i++;
		}
		piles->len_b--;
	}
	if (do_print)
		ft_printf(GREEN"PA\n"RESET);
}

void	push_b(int value, t_piles *piles)
{
	int i;

	if (piles->len_b >= piles->maxlen)
		exit_error("pile B is full, impossible to push a new element.\n");
	i = piles->len_b;
	while (i > 0)
	{
		piles->pile_b[i] = piles->pile_b[i - 1];
		i--;
	}
	piles->pile_b[0] = value;
	piles->len_b++;
	if (piles->len_a > 0)
	{
		i = 0;
		while (i < piles->len_a - 1)
		{
			piles->pile_a[i] = piles->pile_a[i + 1];
			i++;
		}
		piles->len_a--;
	}
	ft_printf(GREEN"PB\n"RESET);
}

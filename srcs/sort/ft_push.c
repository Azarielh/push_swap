/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:28:22 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 22:52:10 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_piles *piles, int do_print)
{
	int	multiplyer;

	multiplyer = piles->len_b - 1;
	if (piles->len_b == 0)
		return ;
	ft_memmove(piles->pile_a + 1, piles->pile_a, sizeof(int) * piles->len_a);
	piles->pile_a[0] = piles->pile_b[0];
	piles->len_a++;
	ft_memmove(piles->pile_b, piles->pile_b + 1, sizeof(int) * multiplyer);
	piles->len_b--;
	if (do_print)
		ft_printf("pa\n");
}

void	push_b(t_piles *piles, int do_print)
{
	int	multiplyer;

	multiplyer = piles->len_a - 1;
	if (piles->len_a == 0)
		return ;
	ft_memmove(piles->pile_b + 1, piles->pile_b, sizeof(int) * piles->len_b);
	piles->pile_b[0] = piles->pile_a[0];
	piles->len_b++;
	ft_memmove(piles->pile_a, piles->pile_a + 1, sizeof(int) * multiplyer);
	piles->len_a--;
	if (do_print)
		ft_printf("pb\n");
}

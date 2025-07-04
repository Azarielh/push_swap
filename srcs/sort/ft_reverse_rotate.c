/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:30:23 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 02:17:23 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(t_piles *piles, int do_print)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_a;
	//ft_printf("reverse rotate init len = %d\n", len);
	first = piles->pile_a[0];
	//ft_printf("init first= %d\n", len);

	last = piles->pile_a[len - 1];
	//ft_printf("last = "RESET"%d\n", last);
	while (first != last && len-- > 0)
	{
		piles->pile_a[len] = piles->pile_a[len - 1];
		// ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n",
			// len, len, piles->pile_a[len - 1]);
	}
	piles->pile_a[0] = last;
	if (do_print == TRUE)
		ft_printf(GREEN"rra\n"RESET);
	//print_pile_a(piles);
}

void	reverse_rotate_b(t_piles *piles, int do_print)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_b;
	//ft_printf("rotate init len = %d\n", len);
	first = piles->pile_b[0];
	last = piles->pile_b[len - 1];
	//ft_printf(ORANGE"last = "RESET"%d\n", last);
	while (first != last && len-- > 0)
	{
		piles->pile_b[len] = piles->pile_b[len - 1];
		// ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n",
		// 	len, len, piles->pile_b[len]);
	}
	piles->pile_b[0] = last;
	if (do_print == TRUE)
		ft_printf(GREEN"rrb\n"RESET);
}

void	double_reverse(t_piles *piles)
{
	reverse_rotate_a(piles, FALSE);
	reverse_rotate_b(piles, FALSE);
	ft_printf(GREEN"rrr"RESET);
}

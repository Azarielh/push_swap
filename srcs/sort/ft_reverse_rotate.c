/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:30:23 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/28 02:09:45 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_A(t_piles *piles)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_a;
	ft_printf("rotate init len = %d\n", len);
	first = piles->pile_a[0];
	last = piles->pile_a[len - 1];
	ft_printf(ORANGE"last = "RESET"%d\n", last);
	while (first != last && len-- > 0)
	{
		piles->pile_a[len] = piles->pile_a[len - 1];
		ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n", len, len, piles->pile_a[len]);
	}
	piles->pile_a[0] = last;
	ft_printf(GREEN"rra\n"RESET);
}

void	reverse_rotate_B(t_piles *piles)
{
	int	first;
	int	last;
	int	len;

	len = piles->len_b;
	ft_printf("rotate init len = %d\n", len);
	first = piles->pile_b[0];
	last = piles->pile_b[len - 1];
	ft_printf(ORANGE"last = "RESET"%d\n", last);
	while (first != last && len-- > 0)
	{
		piles->pile_b[len] = piles->pile_b[len - 1];
		ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n", len, len, piles->pile_b[len]);
	}
	piles->pile_b[0] = last;
	ft_printf(GREEN"rrb\n"RESET);
}

void	double_reverse(t_piles *piles)
{
	reverse_rotate_A(piles);
	reverse_rotate_B(piles);
	ft_printf(GREEN"rrr"RESET);
}
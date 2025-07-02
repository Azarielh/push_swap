/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:30:23 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 02:22:56 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(t_piles *piles, int do_print)
{
	int	first;
	int	len;

	len = 0;
	first = piles->pile_a[0];
	ft_printf(ORANGE"first = "RESET"%d\n", first);
	while (len < piles->len_a)
	{
		piles->pile_a[len] = piles->pile_a[len + 1];
		ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n",
			len, len, piles->pile_a[len + 1]);
		len++;
	}
	piles->pile_a[piles->len_a - 1] = first;
	ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n",
		len - 1, len - 1, first);
	if (do_print == TRUE)
		ft_printf(GREEN"ra\n"RESET);
}

void	rotate_b(t_piles *piles, int do_print)
{
	int	first;
	int	len;

	len = piles->len_b;
	ft_printf("rotate init len = %d\n", len);
	first = piles->pile_b[0];
	ft_printf(ORANGE"first = "RESET"%d\n", first);
	while (len < piles->len_b)
	{
		piles->pile_b[len] = piles->pile_b[len + 1];
		ft_printf(ORANGE"len = "RESET"%d soit pile_a[%d] = %d\n",
			len, len, piles->pile_b[len]);
		len++;
	}
	piles->pile_a[piles->len_b - 1] = first;
	if (do_print == TRUE)
		ft_printf(GREEN"rb\n"RESET);

}

void	double_rotate(t_piles *piles)
{
	rotate_a(piles, FALSE);
	rotate_b(piles, FALSE);
	ft_printf(GREEN"rrr"RESET);
}

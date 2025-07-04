/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:28:22 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 03:47:44 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(int value, t_piles *piles, int do_print)
{
	// ft_printf(YELLOW"PUSH A is here\n"RESET);
	// ft_printf(BLUE"pile_max = "RESET" %d      ----      "
	// BLUE"Longueur de la pile : "RESET"%d\n", piles->maxlen, piles->len_a);

	if (piles->len_a > piles->maxlen)
		exit_error("pile A is full, impossible to push a new element.\n");
	ft_memmove(piles->pile_a + 1, piles->pile_a, sizeof(int) * piles->len_a);
	ft_memmove(piles->pile_b - 1, piles->pile_b, sizeof(int) * piles->len_b);

	piles->pile_a[0] = value;
	if (piles->len_b > 0)
		piles->len_b--;
	piles->len_a++;
	if (do_print)
		ft_printf(GREEN"PA\n"RESET);
}

void	push_b(int value, t_piles *piles)
{
	// ft_printf(ORANGE"PUSH B is here\n"RESET);
	// ft_printf(BLUE"pile_max = "RESET" %d      ----      "
	// BLUE"Longueur de la pile : "RESET"%d\n", piles->maxlen, piles->len_b);

	if (piles->len_b > piles->maxlen)
		exit_error("pile B is full, impossible to push a new element.\n");
	ft_memmove(piles->pile_b + 1, piles->pile_b, sizeof(int) * piles->len_b);
	ft_memmove(piles->pile_a - 1, piles->pile_a, sizeof(int) * piles->len_a);
	piles->pile_b[0] = value;
	if (piles->len_a > 0)
		piles->len_a--;
	piles->len_b++;
	ft_printf(GREEN"PB\n"RESET);
}

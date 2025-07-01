/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 23:17:16 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 01:09:25 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(t_piles *piles)
{
	int	temp;

	temp = piles->pile_a[0];
	piles->pile_a[0] = piles->pile_a[1];
	piles->pile_a[1] = temp;
	printf(GREEN"sa"RESET"\n");
}

void	swap_b(t_piles *piles)
{
	int	temp;

	temp = piles->pile_b[0];
	piles->pile_b[0] = piles->pile_b[1];
	piles->pile_b[1] = temp;
	printf(GREEN"sb"RESET"\n");
}

void	double_swap(t_piles *piles)
{
	swap_a(piles);
	swap_b(piles);
	ft_printf(GREEN"ss\n"RESET);
}

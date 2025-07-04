/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 06:25:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 00:22:00 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		get_lowest_pos(t_piles *piles)
{
	int	i;
	int	pos;
	int	lowest;
	ft_printf(YELLOW"get_lowest_pos is here\n");

	i = -1;
	pos = 0;
	lowest = piles->pile_a[0];
	while (++i < piles->len_a)
	{
		if (piles->pile_a[i] < lowest)
		{
			lowest = piles->pile_a[i];
			pos = i;
		}
	}
	piles->min = piles->pile_a[pos];
	ft_printf(CYAN_LIGHT"lowest = %d\n return pos_value = %d\n"RESET, piles->min, pos);
	return (pos);
}

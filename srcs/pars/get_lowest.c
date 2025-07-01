/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 06:25:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 08:00:37 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		get_lowest_pos(t_piles *piles)
{
	int	i;
	int	lowest;

	i = -1;
	lowest = 0;
	while (piles->pile_a[++i])
	{
		if (lowest > piles->pile_a[i])
			lowest = piles->pile_a[i];
	}
	piles->min = lowest;
	ft_printf(CYAN_LIGHT"lowest = %d\n"RESET, lowest);
	return (i - 1);
}

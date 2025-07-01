/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_highest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 06:05:38 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 07:00:25 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		get_highest_pos (t_piles *piles)
{
	int	i;
	int	highest;

	i = -1;
	highest = 0;
	while (piles->pile_a[++i])
	{
		if (highest < piles->pile_a[i])
			highest = piles->pile_a[i];
	}
	piles->max = highest;
	ft_printf(ORANGE"highest = %d\n"RESET, highest);
	return (i - 1);
}

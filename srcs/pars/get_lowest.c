/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 06:25:09 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 00:34:38 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_lowest_pos(t_piles *piles)
{
	int	i;
	int	pos;
	int	lowest;

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
	return (pos);
}

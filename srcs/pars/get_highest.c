/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_highest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 06:05:38 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:01:01 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_highest_pos(t_piles *piles)
{
	int	i;
	int	pos;
	int	highest;

	i = -1;
	pos = 0;
	highest = piles->pile_a[0];
	while (++i < piles->len_a)
	{
		if (piles->pile_a[i] > highest)
		{
			highest = piles->pile_a[i];
			pos = i;
		}
	}
	piles->max = piles->pile_a[pos];
	return (pos);
}

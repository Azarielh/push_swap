/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 07:11:10 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 03:59:37 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_piles *piles)
{
	int	i;
	
	i = -1;
	while (++i < piles->len_a - 1)
		if (piles->pile_a[i] >= piles->pile_a[i + 1])
			return (FALSE);
	return (TRUE);
}

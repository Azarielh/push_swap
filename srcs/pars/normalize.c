/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 00:33:15 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 13:20:42 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	normalize(t_piles *piles)
{
	int	i;
	int	j;
	int	count;
	int	*temp;

	temp = malloc(sizeof(int) * piles->maxlen);
	if (!temp)
		return (exit_error(piles));
	i = -1;
	while (++i < piles->len_a)
		temp[i] = piles->pile_a[i];
	i = -1;
	while (++i < piles->len_a)
	{
		count = 0;
		j = -1;
		while (++j < piles->len_a)
			if (temp[j] < temp[i])
				count++;
		piles->pile_a[i] = count;
	}
	free(temp);
	return (0);
}

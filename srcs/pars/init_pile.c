/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:35:04 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/14 09:29:05 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	init_pile(char **args, t_piles *piles, int argc)
{
	int	i;

	piles->len_a = argc;
	piles->len_b = 0;
	piles->maxlen = argc;
	piles->pile_a = malloc(sizeof(int) * argc + 1);
	piles->pile_b = malloc(sizeof(int) * argc + 1);
	if (piles->pile_a == NULL || piles->pile_b == NULL)
		exit_error(piles);
	i = 0;
	while (i < argc)
	{
		piles->pile_a[i] = ft_atoi(args[i]);
		i++;
	}
	return (0);
}

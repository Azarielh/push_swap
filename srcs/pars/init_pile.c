/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:35:04 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:26:44 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	init_pile(char **args, t_piles *piles, int argc)
{
	piles->len_a = 0;
	piles->len_b = 0;
	piles->maxlen = argc + 1;
	piles->pile_a = malloc(sizeof(int *) * argc + 1);
	piles->pile_b = malloc(sizeof(int *) * argc + 1);
	if (piles->pile_a == NULL || piles->pile_b == NULL)
		exit_error("malloc");
	while (argc >= 1)
		push_a(ft_atoi(args[argc--]), piles, FALSE);
	normalize (piles);
	return (0);
}

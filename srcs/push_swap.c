/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 18:05:43 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;
	int		len;
	ft_printf(BLUE"\n\n======================== NEW TEST  ========================\n\n"RESET);
	ft_printf("      ---------- %s ----- %s ----- %s ----- %s ----------\n", pile_base[1], pile_base[2], pile_base[3], pile_base[4]);
	len = 0;
	if (argc < 3)
		exit_error(RED"Error : wrong number of arguments\n"RESET);
	if (is_valid_int_list(pile_base, argc))
		ft_printf("Args are a "GREEN"valid "RESET"int list\n");
	init_pile(pile_base++, &piles);
	ft_printf(YELLOW"%d"RESET, piles.pile_a[len]);

	while (piles.pile_a[len++])
		ft_printf(YELLOW"%i\n"RESET, piles.pile_a[len]);

	return (0);
}

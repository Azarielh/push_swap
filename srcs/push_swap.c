/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/28 02:22:16 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;
	ft_printf(BLUE"\n\n======================== NEW TEST  ========================\n\n"RESET);
	ft_printf("      ---------- %s ----- %s ----- %s ----- %s ----------\n", pile_base[1], pile_base[2], pile_base[3], pile_base[4]);
	if (argc < 3)
		exit_error(RED"Error : wrong number of arguments\n"RESET);
	if (is_valid_int_list(pile_base, argc))
		ft_printf("Args are a "GREEN"valid "RESET"int list\n");
	init_pile(pile_base++, &piles, argc - 1);

	// while (piles.pile_a[len++])
	// 	ft_printf(YELLOW"piles.pile_a[len] = %d\n"RESET, piles.pile_a[len]);
	print_pile_A(&piles);
	rotate_A(&piles);
	print_pile_A(&piles);
	double_swap(&piles);
	print_pile_A(&piles);
	push_B(piles.pile_a[0], &piles);
	print_pile_B(&piles);

	return (0);
}


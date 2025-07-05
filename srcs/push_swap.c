/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:39:12 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;

	ft_printf(BLUE"\n\n=============== NEW TEST  ===============\n\n"RESET);
	if (argc < 3)
		exit_error(RED"wrong number of arguments\n"RESET);
	is_valid_int_list(pile_base, argc);
	init_pile(pile_base++, &piles, argc - 1);
	if (is_sorted(&piles))
		exit_error("List is already sorted.");
	if (argc < 7)
		exception_handler(argc, &piles);
	else
	{
		normalize (&piles);
		sort(&piles);
	}
	print_pile_a(&piles);
	return (0);
}


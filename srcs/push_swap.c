/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/30 02:45:37 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;

	ft_printf(BLUE"\n\n=============== NEW TEST  ===============\n\n"RESET);

	if (argc < 3)
		exit_error(RED"Error : wrong number of arguments\n"RESET);
	if (is_valid_int_list(pile_base, argc))
		ft_printf("Args are a "GREEN"valid "RESET"int list\n");
	init_pile(pile_base++, &piles, argc - 1);
	if (!is_sorted(&piles))
		return (0);
	if (argc < 5)
		exception_handler(argc, &piles);

	print_pile_a(&piles);

	return (0);
}


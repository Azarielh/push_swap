/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/21 23:20:12 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;

	ft_bzero(&piles, sizeof(piles));
	if (argc < 2)
		exit(0);
	if (argc < 3)
		exit_error(&piles);
	if (!is_valid_int_list(pile_base, argc))
		exit_error(&piles);
	init_pile(pile_base + 1, &piles, argc - 1);
	if (!is_sorted(&piles))
		exception_handler(argc, &piles);
	free(piles.pile_a);
	free(piles.pile_b);
	return (EXIT_SUCCESS);
}

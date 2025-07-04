/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 19:34:51 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 01:45:03 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **pile_base)
{
	t_piles	piles;

	if (argc < 3)
		exit_error("Error\n");
	if (!is_valid_int_list(pile_base, argc))
		exit_error("Error\n");
	init_pile(pile_base + 1, &piles, argc - 1);

	if (is_sorted(&piles))
		return (0);

	exception_handler(argc, &piles);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:38:59 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 21:49:40 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exception_handler(int argc, t_piles *piles)
{
	argc--;
	if (argc == 2 && piles->pile_a[0] > piles->pile_a[1])
		swap_a(piles, TRUE);
	else if (argc == 3)
		sort_three(piles);
	else if (argc == 4)
		sort_four(piles);
	else if (argc == 5)
		sort_five(piles, piles->pile_a);
	else if (argc > 5)
		radix_sort(piles);
}

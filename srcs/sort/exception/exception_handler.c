/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:38:59 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 03:59:54 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	exception_handler(int argc, t_piles *piles)
{
	argc--;
	if (argc == 2 && piles->pile_a[0] > piles->pile_a[1])
		swap_a(piles, TRUE);
	else if (argc == 3)
		sort_three(piles);
	else if (argc == 4)
		sort_four(piles);
	else if (argc >= 5)
		radix_sort(piles);
}

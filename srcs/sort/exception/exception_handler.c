/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:38:59 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 07:10:06 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	exception_handler(int argc, t_piles *piles)
{
	ft_printf(YELLOW"exception handler is here\n");
	argc--;

	if (argc == 2 && piles->pile_a[0] > piles->pile_a[1])
		swap_a(piles);
	if (argc == 3)
		sort_three (piles);
	if (argc == 4)
		return ;// create function that manage this case
	if (argc == 5)
		return ;// create function that manage this case
	return ;
}
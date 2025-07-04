/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 04:38:59 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/02 01:43:26 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

void	exception_handler(int argc, t_piles *piles)
{
	ft_printf(YELLOW"exception handler is here\n");
	argc--;
	ft_printf("exception handler : argc = %d\n", argc);

	if (argc == 2 && piles->pile_a[0] > piles->pile_a[1])
		swap_a(piles, TRUE);
	else if (argc == 3)
		sort_three (piles);
	if (argc == 4)
		sort_four(piles);
	if (argc == 5)
		sort_five(piles);
	return ;
}

// void sort_five(t_piles *piles)
// {
// 	while (piles->pile_a)
// }
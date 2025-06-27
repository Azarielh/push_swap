/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:28:22 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 17:59:31 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_push( char *to_add, t_piles *piles, int len)
{
	int		pos;
	int		to_push;


	ft_printf("len = %d\n", len);
	ft_printf(YELLOW"ft_push is here to print >> %s\n"RESET, to_add);
	while (len-- > 1)
	{
		to_push = ft_atoi(to_add);
		if (piles->pile_a == NULL)
		{
			piles->pile_a[0] = to_push;
			continue ;
		}
		pos = len + 1;
		piles->pile_a[len] = piles->pile_a[pos];
	}

	ft_printf(" args pushed at pos(%d) = %d\n", pos, piles->pile_a[pos]);
	return (0);
}

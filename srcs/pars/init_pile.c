/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:35:04 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 17:49:05 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	init_pile(char **args, t_piles *piles)
{
	size_t	len;
	
	ft_printf(YELLOW"init is here\n"RESET);
	len = 0;
	while (args[len])
		len++;
	piles->len_a = len -1;
	ft_printf("len_a = %d\n", piles->len_a);
	//ft_printf("calloc size = %d\n", sizeof(int *) * (len + 1));
	piles->pile_a = malloc(sizeof(int *) * len + 1);
	piles->pile_b = malloc(sizeof(int *) * len + 1);

	if (piles->pile_a == NULL)
		exit_error("calloc");
	len = 0;
	ft_printf(BLUE"num to push first"RESET" = %s\n", args[len + 1]);
	while (len++ <= piles->len_a)
	{
		ft_push(args[len], piles, piles->len_a);
		ft_printf(YELLOW"pushing to args :"RESET"\nargs[%d] = %s, piles, %d\n", len ,args[len], piles, piles->len_a);
	}
	return (len);
}

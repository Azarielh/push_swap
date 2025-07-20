/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 03:33:55 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/14 09:15:53 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	exit_error(t_piles *piles)
{
	if (piles)
	{
		free(piles->pile_a);
		free(piles->pile_b);
		ft_putendl_fd("Error", 2);
		exit (EXIT_FAILURE);
	}
	exit (0);
}

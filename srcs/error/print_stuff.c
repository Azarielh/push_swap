/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 03:33:55 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 14:04:36 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	exit_error(char *error_msg, t_piles *piles)
{
	if (ft_strncmp(error_msg, "arguments", 9) == 0)
		exit (1);
	ft_putendl_fd(RED"Error :"RESET, 2);
	ft_putendl_fd(error_msg, 2);
	if (piles)
	{
		free(piles->pile_a);
		free(piles->pile_b);
	}
	exit (EXIT_FAILURE);
}

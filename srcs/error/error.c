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

#include "../../includes/push_swap.h"

int	exit_error(char *error_msg, t_piles *piles)
{
	if (ft_strncmp(error_msg, "arguments", 9) == 0)
		exit (0);
	if (ft_strncmp(error_msg, "Need at least 2 args", 20) == 0)
	{
		ft_putendl_fd(RED"Error :"RESET, 2);
		ft_putendl_fd(error_msg, 2);
		exit(EXIT_FAILURE);
	}
	ft_putendl_fd(RED"Error :"RESET, 2);
	ft_putendl_fd(error_msg, 2);
	if (piles)
	{
		free(piles->pile_a);
		free(piles->pile_b);
	}
	exit (EXIT_FAILURE);
}

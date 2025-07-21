/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:48:24 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/21 22:06:03 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_valid_int_list(char **pile_base, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_isnumber(pile_base[i]) == 0)
		{
			ft_putendl_fd("Error", 2);
			exit (1);
		}
		if (ft_isnumber(pile_base[i]) == 1 && is_valid_int(pile_base[i]) == 0)
		{
			ft_putendl_fd("Error", 2);
			exit (1);
		}
		i++;
	}
	if (!has_no_double(pile_base))
		return (exit_error(NULL));
	return (1);
}

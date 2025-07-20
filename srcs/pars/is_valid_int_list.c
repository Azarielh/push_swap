/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:48:24 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 13:26:53 by jlacaze-         ###   ########.fr       */
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
			return (exit_error(NULL));
		if (ft_isnumber(pile_base[i]) == 1 && is_valid_int(pile_base[i]) == 0)
			return (exit_error(NULL));
		i++;
	}
	if (!has_no_double(pile_base))
		return (exit_error(NULL));
	return (1);
}

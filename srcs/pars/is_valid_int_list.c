/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 23:48:24 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 19:07:29 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_valid_int_list(char **pile_base, int argc)
{
	int	i;
	ft_printf(YELLOW"is_valid_int_list is here\n"RESET);
	i = 1;
	while (i < argc)
	{
		if (ft_isnumber(pile_base[i]) == 0)
			return (exit_error("Invalid: non-digit characters"));
		if (!(ft_isnumber(pile_base[i]) == 1) && !(is_valid_int(pile_base[i]) == 1))//does not exit in the right condition. Eventually reverse with !
			return (exit_error("non int character"));
		i++;
	}
	if (!has_no_double(pile_base))
		return (exit_error("There is double in there"));
	ft_printf(GREEN"reach end of is_valid_int_list\n"RESET);
	return (1);
}

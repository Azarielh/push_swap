/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:41:07 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 18:44:45 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	is_valid_int(const char *str)
{
	long long	nb;

	nb = ft_atol(str) - ft_atoi(str);
	if (*str != '0' && nb != 0)
		ft_printf(RED"atol error = "RESET"%d\n");
	return ((nb >= INT_MIN && nb <= INT_MAX));
}

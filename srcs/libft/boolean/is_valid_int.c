/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:41:07 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/29 04:37:18 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	is_valid_int(const char *str)
{
	long long	nb;

	nb = ft_atol(str) - ft_atoi(str);
	if (*str != '0' && nb != 0)
		ft_printf(RED"atol error = "RESET"%lld\n", nb);
	return ((nb >= INT_MIN && nb <= INT_MAX));
}

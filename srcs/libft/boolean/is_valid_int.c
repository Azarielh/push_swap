/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:41:07 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 23:22:33 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/push_swap.h"

int	is_valid_int(const char *str)
{
	long long	nb;

	nb = ft_atol(str);
	if (nb < INT_MIN || nb > INT_MAX)
		return (0);
	return (1);
}

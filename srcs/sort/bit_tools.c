/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 03:54:46 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/06 00:28:51 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pick_binary(int nb, int pos)
{
	return ((nb >> (pos - 1)) & 1);
}

int	count_bits(int nb)
{
	int	bits;

	bits = 0;
	while ((nb >> bits) != 0)
		bits++;
	return (bits);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze <jlacaze-@student.42lyon.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 00:41:07 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/16 23:19:24 by jlacaze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_valid_int(const char *str)
{
	if (ft_strlen(str) == 1 && (str[0] == '+' || str[0] == '-'))
		return (0);
	if (ft_atoi(str) != ft_atol(str))
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_no_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 02:01:34 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 02:15:24 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	has_no_double(char **str)
{
	int	index;
	int	value;
	int	temp;
	int	i;

	index = 1;
	while (str[index])
	{
		i = 1;
		value = ft_atol(str[index]);
		while (str[index + i])
		{
			temp = ft_atol(str[index + i++]);
			if (value == temp)
				return (0);
		}
		index++;
	}
	return (1);
}

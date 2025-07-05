/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:42:13 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 23:19:29 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_isnumber(char *str)
{
	if (ft_isdigit(str[0]) == 0 && is_signed_int(*str) == 0)
		return (0);
	if (is_signed_int(*str) > 0)
		str++;
	while (ft_isdigit(*str))
		str++;
	if (*str == '\0')
		return (1);
	else
		return (0);
}

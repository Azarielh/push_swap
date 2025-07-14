/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:51:46 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/27 03:49:32 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	s_len;
	size_t	copy_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	copy_len = s_len - start;
	if (copy_len > len)
		copy_len = len;
	new_string = (char *)malloc(sizeof(char) * (copy_len + 1));
	if (!new_string)
		return (NULL);
	ft_strlcpy(s + start, new_string, copy_len + 1);
	return (new_string);
}

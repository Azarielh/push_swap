/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:30:00 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 12:30:00 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/**
 * @brief Normalize values in stack A to indices 0, 1, 2, ..., n-1
 * This replaces each value with its rank in the sorted order
 * 
 * @param piles The stack structure
 */
void	normalize_values(t_piles *piles)
{
	int	*sorted_copy;
	int	i;
	int	j;
	
	if (piles->len_a <= 0)
		return ;
	sorted_copy = malloc(sizeof(int) * piles->len_a);
	if (!sorted_copy)
		exit_error("Memory allocation failed for normalization\n");
	i = 0;
	while (i < piles->len_a)
	{
		sorted_copy[i] = piles->pile_a[i];
		i++;
	}
	bubble_sort_normalize(sorted_copy, piles->len_a);
	i = 0;
	while (i < piles->len_a)
	{
		j = 0;
		while (j < piles->len_a)
		{
			if (piles->pile_a[i] == sorted_copy[j])
			{
				piles->pile_a[i] = j;
				break;
			}
			j++;
		}
		i++;
	}
	free(sorted_copy);
}

/**
 * @brief Simple bubble sort for normalization
 * 
 * @param arr Array to sort
 * @param size Size of the array
 */
void	bubble_sort_normalize(int *arr, int size)
{
	int	i;
	int	j;
	int	temp;
	
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 03:33:55 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 04:51:39 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	exit_error(char *error_msg)
{
	ft_putendl_fd(RED"Error :"RESET, 2);
	ft_putendl_fd(error_msg, 2);
	// Add piles as an argument to free
	exit (EXIT_FAILURE);
}

void print_pile_a(t_piles *piles)
{
	int i;

	i = -1;
	if (piles->pile_a == NULL)
		exit_error("pile a is empty.\n");
	ft_printf(BLUE"Longueur de la pile a :"RESET"%d\n", piles->len_a);
	ft_printf(BLUE"Contenu de pile_a :\n"RESET);
	while (++i < piles->len_a)
		ft_printf("pile_a[%d] = %d\n", i, piles->pile_a[i]);
}

void print_pile_b(t_piles *piles)
{
	int i;

	i = -1;
	if (piles->pile_b == NULL)
	{
		ft_printf("pile b is empty.\n");
		return ;
	}
	ft_printf(BLUE"Longueur de la pile b :"RESET" %d\n", piles->len_b);
	ft_printf(BLUE"Contenu de pile_b :\n"RESET);
	while (++i < piles->len_b)
		ft_printf("pile_b[%d] = %d\n", i, piles->pile_b[i]);
}

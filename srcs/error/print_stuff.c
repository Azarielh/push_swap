/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 03:33:55 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/07/05 01:47:15 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	exit_error(char *error_msg)
{
	ft_printf(RED"Error :"RESET" %s\n", error_msg);
	exit (EXIT_FAILURE);
}

void print_pile_a(t_piles *piles)
{
	// ft_printf("print_pile a is here.\n");

	if (piles->pile_a == NULL)
	{
		ft_printf("pile a is empty.\n");
		return ;
	}
	ft_printf(BLUE"Longueur de la pile a :"RESET" %d\n", piles->len_a);
	ft_printf(BLUE"Contenu de pile_a :\n"RESET);
	for (int i = 0; i < piles->len_a; i++) {
		ft_printf("pile_a[%d] = %d\n", i, piles->pile_a[i]);
	}
}

void print_pile_b(t_piles *piles)
{
	if (piles->pile_b == NULL)
	{
		ft_printf("pile b is empty.\n");
		return ;
	}
	ft_printf(BLUE"Longueur de la pile b :"RESET" %d\n", piles->len_b);
	ft_printf(BLUE"Contenu de pile_b :\n"RESET);
	for (int i = 0; i < piles->len_b; i++) {
		ft_printf("pile_b[%d] = %d\n", i, piles->pile_b[i]);
	}
}

void print_pos_target(t_piles *piles)
{
	ft_printf("print_pos_target is here.\n");

	if (piles->pile_a == NULL)
	{
		ft_printf("pile a is empty.\n");
		return ;
	}
	ft_printf(BLUE"Contenu de pos_taget :\n"RESET);
	for (int i = 0; i < piles->len_a; i++) {
		ft_printf("pos_target[%d] = %d\n", i, piles->pos_target[i]);
	}
}

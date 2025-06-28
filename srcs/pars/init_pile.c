/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pile.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:35:04 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/28 02:20:58 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void print_pile_A(t_piles *piles) 
{
    // Vérifier si pile_a existe
    if (piles->pile_a == NULL) {
        printf("La pile_a est vide.\n");
		return ;
    }
	ft_printf(BLUE"Longueur de la pile a :"RESET" %d\n", piles->len_a);
    printf(BLUE"Contenu de pile_a :\n"RESET);
    for (int i = 0; i < piles->len_a; i++) {
        printf("pile_a[%d] = %d\n", i, piles->pile_a[i]);
    }
}

void print_pile_B(t_piles *piles) 
{
    // Vérifier si pile_a existe
    if (piles->pile_b == NULL) {
        printf("La pile_a est vide.\n");
		return ;
    }
	ft_printf(BLUE"Longueur de la pile a :"RESET" %d\n", piles->len_b);
    printf(BLUE"Contenu de pile_b :\n"RESET);
    for (int i = 0; i < piles->len_b; i++) {
        printf("pile_b[%d] = %d\n", i, piles->pile_b[i]);
    }
}


int	init_pile(char **args, t_piles *piles, int argc)
{
	ft_printf(YELLOW"init is here\n"RESET);
	piles->len_a = 0;
	piles->len_b = 0;
	piles->maxlen = argc + 1;
	ft_printf("argc = %d\n", argc);
	piles->pile_a = malloc(sizeof(int *) * argc + 1);
	piles->pile_b = malloc(sizeof(int *) * argc + 1);
	if (piles->pile_a == NULL || piles->pile_b == NULL)
		exit_error("malloc");
	while (argc >= 1)
	{
		push_A(ft_atoi(args[argc]), piles);
		argc--;
	}
	return (0);
}

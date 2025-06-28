/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlacaze- <jlacaze-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 04:28:22 by jlacaze-          #+#    #+#             */
/*   Updated: 2025/06/28 01:01:43 by jlacaze-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_A(int value, t_piles *piles)
{
	ft_printf(YELLOW"ft_push is here\n"RESET);
	ft_printf(BLUE"pile_max = "RESET" %d      ----      "BLUE"Longueur de la pile : "RESET"%d\n", piles->maxlen, piles->len_a);

	if (piles->len_a > piles->maxlen)
		exit_error("La pile est pleine, impossible de pousser un nouvel élément.\n");
	ft_memmove(piles->pile_a + 1, piles->pile_a, sizeof(int) * piles->len_a);
	piles->pile_a[0] = value;
	piles->len_a++;
	ft_printf(GREEN"PA\n"RESET);
}

void	push_B(int value, t_piles *piles)
{
	ft_printf(YELLOW"ft_push is here\n"RESET);
	ft_printf(BLUE"pile_max = "RESET" %d      ----      "BLUE"Longueur de la pile : "RESET"%d\n", piles->maxlen, piles->len_b);

	if (piles->len_b > piles->maxlen)
		exit_error("La pile est pleine, impossible de pousser un nouvel élément.\n");
	ft_memmove(piles->pile_b + 1, piles->pile_b, sizeof(int) * piles->len_b);
	piles->pile_b[0] = value;
	piles->len_b++;
	ft_printf(GREEN"PB\n"RESET);
}

















// int	ft_push(char *to_add, t_piles *piles)
// {
// 	int		pos;
// 	int		tmp_num;
// 	int		tmp_len;
// 	int		to_push;

// 	to_push = ft_atoi(to_add);
// 	tmp_len  = piles->len_a;
// 	pos = tmp_len;
// 	tmp_num = piles->pile_a[pos];
// 	ft_printf(YELLOW"ft_push is here to print >> %d\n"RESET, to_push);
// 	ft_printf(BLUE"tmp_num = "RESET"%d      ---     "BLUE"Longueur de la pile : "RESET"%d\n", tmp_num, piles->len_a);
// 	if (piles->len_a == 1) {
// 		piles->pile_a[0] = to_push;
// 		ft_printf("after first push: pile_a[%d] = %d\n", 0, piles->pile_a[0]);
// 		return (0);
// 	}
// 	while (pos > 0 && !(piles->len_a == 1))
// 	{
// 		piles->pile_a[pos + 1] = piles->pile_a[pos];
// 		pos--;
// 	}
// 	piles->pile_a[pos] = tmp_num;
// 	ft_printf("after push pile_a[0] = %d\n", piles->pile_a[0]);
// 	return (0);
// }

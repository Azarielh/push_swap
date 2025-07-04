#include "../../../includes/push_swap.h"

// static void	cut_from_five_n_sort(t_piles *piles)
// {
// 	int	min ;
// 	int	min_pos ;

// 	min = piles->min;
// 	min_pos = get_lowest_pos(piles);
// 	ft_printf("min = %d\nmin_pos = %d\n", min, min_pos);
// 	if (min_pos <= 3)
// 		while (0 <= min_pos--)
// 			rotate_a(piles, TRUE);
// 	else if (min_pos == 2 || min_pos == 3)
// 		while (min_pos++ < piles->len_a)
// 			reverse_rotate_a(piles, TRUE);
// 	print_pile_a(piles);
	
// 	push_b(piles->pile_a[0], piles);
// 	print_pile_a(piles);

// 	sort_three(piles);
// 	push_a(piles->pile_b[0], piles, TRUE);
// 	print_pile_a(piles);
// }


void	sort_five(t_piles *piles)
{
	int	min ;
	int	min_pos ;

	min = piles->min;
	min_pos = get_lowest_pos(piles);
	ft_printf("min = %d\nmin_pos = %d\n", min, min_pos);
	if (min_pos <= 3)
		while (0 <= min_pos--)
			rotate_a(piles, TRUE);
	else if (min_pos == 2 || min_pos == 3)
		while (min_pos++ < piles->len_a)
			reverse_rotate_a(piles, TRUE);
	print_pile_a(piles);
	
	push_b(piles->pile_a[0], piles);
	print_pile_a(piles);

	sort_three(piles);
	push_a(piles->pile_b[0], piles, TRUE);
	print_pile_a(piles);
}

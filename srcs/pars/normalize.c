#include "../../includes/push_swap.h"

int	normalize(t_piles *piles)
{
	int	i;
	int	j;
	int	count;
	
	ft_printf("normalize is here\n");
	piles->pos_target = malloc(sizeof(int) * piles->maxlen);
	if (!piles->pos_target)
		return (exit_error("normalize: malloc failed"));
	i = -1;
	j = -1;
	count = 0;
	// ft_printf("pile in normalize before treatment\n");
	// print_pile_a(piles);

	while (++i < piles->len_a)
	{
		while (++j < piles->len_a)
		{
			if (piles->pile_a[j] <= piles->pile_a[i] && i != j)
					count++;
		}
		piles->pile_a[i] = count;
		count = 0;
		j = -1;
	}
	return (0);
}

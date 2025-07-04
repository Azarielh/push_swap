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
	ft_printf("normalize success malloc\n");

	i = -1;
	j = -1;
	count = 0;
	ft_printf("pile in normalize before treatment\n");
	print_pile_a(piles);

	while (++i < piles->maxlen)
		piles->pos_target[i] = piles->pile_a[i];
	i = -1;
	while (++i < piles->maxlen)
	{
		while (++j < piles->maxlen)
			if (piles->pos_target[j] <= piles->pos_target[i] && i != j)
				count++;
		piles->pos_target[i] = count;
		count = 0;
		j = -1;
	}
	print_pos_target(piles);
	return (0);
}

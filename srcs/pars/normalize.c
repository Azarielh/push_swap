#include "../../includes/push_swap.h"

int	normalize(t_piles *piles, int *error)
{
	int	i;
	int	j;
	int	count;
	int	*tab;

	tab = malloc(sizeof(int) * piles->maxlen);
	if (!tab)
		return (*error);
	i = -1;
	j = -1;
	count = 0;
	while (++i < piles->maxlen)
		tab[i] = piles->pile_a[i];
	i = -1;
	while (++i < piles->maxlen)
	{
		while (++j < piles->maxlen) 
		{
			if (tab[j] <= tab[i] && i != j)
				count++;
		}
		piles->pile_a[i] = count;
		count = 0;
		j = -1;
	}
	ft_printf("\n");
	free(tab);
	return (0);
}
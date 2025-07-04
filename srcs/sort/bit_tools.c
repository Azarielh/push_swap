
#include "../../includes/push_swap.h"

static int	pick_binary(int nb, int pos)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (pos == 0)
		return (0);
	while (i < pos - 1)
		nb = nb / 2 + (i++ *0);
	num = nb % 2;
	return (num);
}

int	find_better(t_piles *piles)
{
	int	i;
	int	best;

	i = 0;
	best = piles->pile_a[0];
	while (i < piles->len_a)
	{
		if (piles->pile_a[i] > best)
			best = piles->pile_a[i];
		i++;
	}
	return (best);
}

int	count_bits(int nb)
{
	int	bits;

	bits = 0;
	while ((nb >> bits) != 0)
		bits++;
	return (bits);
}

void	ft_sort(t_piles *piles)
{
	int	i;
	int	j;
	int	best;
	int	len;

	i = 0;
	j = 0;
	best = ft_find_better(piles->pile_a);
	len = ft_count_bits(best)+1;
	while (++j < len)
	{
		while (++i < piles->len_a)
		{
			if (pick_bin(piles->pile_a[0], j) == 1)
				ra(piles->pile_a);
			else
				pb(piles);
		}
		while (piles->len_a > 0)
			pa(piles);
		i = -1;
	}
}

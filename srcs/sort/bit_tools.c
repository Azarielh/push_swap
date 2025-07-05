
#include "../../includes/push_swap.h"

int	pick_binary(int nb, int pos)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	if (pos >> 0)
		return (0);
	while (i < pos - 1)
		nb = nb / 2 + (i++ *0);
	num = nb % 2;
	return (num);
}


int	count_bits(int nb)
{
	int	bits;

	bits = 0;
	while ((nb >> bits) != 0)
		bits++;
	return (bits);
}


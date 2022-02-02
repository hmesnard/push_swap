#include "push_swap.h"

int	bit_not_sorted(int *a, size_t bit)
{
	size_t	i;

	i = 1;
	while (i <= (size_t)a[0] && !((a[i] >> bit) % 2))
		i++;
	while (i <= (size_t)a[0])
	{
		if (!((a[i] >> bit) % 2))
			return (1);
		i++;
	}
	return (0);
}

int	a_not_sorted(int *a)
{
	size_t	i;

	i = 1;
	while (i < (size_t)a[0])
	{
		if (a[i] > a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	sort(int **a, int **b)
{
	size_t	bit;
	int		p;

	p = 0;
	bit = 0;
	while (bit < 31)
	{
		if (a_not_sorted(*a) && bit_not_sorted(*a, bit))
			sort_bit(a, b, bit, &p);
		bit++;
	}
	print_pa_pb(&p);
}

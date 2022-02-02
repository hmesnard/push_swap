#include "push_swap.h"

int	get_first_1(int	*first_1, int **a, size_t bit)
{
	size_t	i;

	i = 1;
	while (i <= (size_t)(*a)[0])
	{
		if ((((*a)[i] >> bit) % 2))
		{
			*first_1 = (*a)[i];
			return (1);
		}
		i++;
	}
	return (0);
}

int	zero_in_a(int **a, size_t bit)
{
	size_t	i;

	i = 1;
	while (i <= (size_t)(*a)[0])
	{
		if (!(((*a)[i] >> bit) % 2))
			return (1);
		i++;
	}
	return (0);
}

void	sort_bit(int **a, int **b, size_t bit, int *p)
{
	int	first_1;

	if (get_first_1(&first_1, a, bit))
	{
		while (zero_in_a(a, bit))
		{
			if (!(((*a)[1] >> bit) % 2))
				action_pb_p(a, b, p);
			else
				action_ra_p(*a, p);
		}
		while ((*a)[1] != first_1)
			action_ra_p(*a, p);
		while ((*b)[0])
			action_pa_p(a, b, p);
	}
}

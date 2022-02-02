#include "push_swap.h"

void	action_s_(int *stack)
{
	int	temp;

	temp = stack[1];
	stack[1] = stack[2];
	stack[2] = temp;
}

void	action_sa(int *a)
{
	action_s_(a);
	write(1, "sa\n", 3);
}

void	action_sb(int *b)
{
	action_s_(b);
	write(1, "sb\n", 3);
}

void	action_ss(int *a, int *b)
{
	action_s_(a);
	action_s_(b);
	write(1, "ss\n", 3);
}

void	action_p_(int **a, int **b)
{
	int	*new_a;
	int	*new_b;

	new_a = malloc(((*a)[0] + 2) * sizeof(int));
	if (!new_a)
		exit(0);
	new_b = malloc((*b)[0] * sizeof(int));
	if (!new_b)
		exit(0);
	new_a[0] = (*a)[0] + 1;
	new_b[0] = (*b)[0] - 1;
	new_a[1] = (*b)[1];
	ft_memmove(new_a + 2, *a + 1, (*a)[0] * sizeof(int));
	ft_memmove(new_b + 1, *b + 2, ((*b)[0] - 1) * sizeof(int));
	free(*a);
	free(*b);
	*a = new_a;
	*b = new_b;
}

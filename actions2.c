#include "push_swap.h"

void	action_pa_p(int **a, int **b, int *p)
{
	action_p_(a, b);
	(*p)++;
}

void	action_pa(int **a, int **b)
{
	action_p_(a, b);
	write(1, "pa\n", 3);
}

void	action_pb_p(int **a, int **b, int *p)
{
	action_p_(b, a);
	(*p)--;
}

void	action_pb(int **a, int **b)
{
	action_p_(b, a);
	write(1, "pb\n", 3);
}

void	action_r_(int *stack)
{
	int	temp;

	temp = stack[1];
	ft_memmove(stack + 1, stack + 2, (stack[0] - 1) * sizeof(int));
	stack[stack[0]] = temp;
}

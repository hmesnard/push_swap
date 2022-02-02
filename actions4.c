#include "push_swap.h"

void	action_rr_(int *stack)
{
	int	temp;

	temp = stack[stack[0]];
	ft_memmove(stack + 2, stack + 1, (stack[0] - 1) * sizeof(int));
	stack[1] = temp;
}

void	action_rra(int *a)
{
	action_rr_(a);
	write(1, "rra\n", 4);
}

void	action_rrb(int *b)
{
	action_rr_(b);
	write(1, "rrb\n", 4);
}

void	action_rrr(int *a, int *b)
{
	action_rr_(a);
	action_rr_(b);
	write(1, "rrr\n", 4);
}

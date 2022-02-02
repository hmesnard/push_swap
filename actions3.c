#include "push_swap.h"

void	print_pa_pb(int *p)
{
	while (*p > 0)
	{
		write(1, "pa\n", 3);
		(*p)--;
	}
	while (*p < 0)
	{
		write(1, "pb\n", 3);
		(*p)++;
	}
}

void	action_ra_p(int *a, int *p)
{
	action_r_(a);
	print_pa_pb(p);
	(*p) = 0;
	write(1, "ra\n", 3);
}

void	action_ra(int *a)
{
	action_r_(a);
	write(1, "ra\n", 3);
}

void	action_rb(int *b)
{
	action_r_(b);
	write(1, "rb\n", 3);
}

void	action_rr(int *a, int *b)
{
	action_r_(a);
	action_r_(b);
	write(1, "rr\n", 3);
}

#include "push_swap.h"

void	solve_2(int *a)
{
	if (a[1] > a[2])
		action_sa(a);
}

void	solve_3(int *a)
{
	if (a[2] < a[1] && a[1] < a[3])
		action_sa(a);
	else if (a[3] < a[2] && a[2] < a[1])
	{
		action_sa(a);
		action_rra(a);
	}
	else if (a[2] < a[3] && a[3] < a[1])
		action_ra(a);
	else if (a[1] < a[3] && a[3] < a[2])
	{
		action_sa(a);
		action_ra(a);
	}
	else if (a[3] < a[1] && a[1] < a[2])
		action_rra(a);
}

void	solve_5_bis(int	**a, int **b, int next)
{
	next = (*b)[1] + 1;
	if (next == 6)
		next = 1;
	if ((*a)[4] == next)
		action_rra(*a);
	else
		while ((*a)[1] != next)
			action_ra(*a);
	action_pa(a, b);
	if ((*a)[4] == 1 || (*a)[5] == 1)
		while ((*a)[1] != 1)
			action_rra(*a);
	else
		while ((*a)[1] != 1)
			action_ra(*a);
}

void	solve_5(int **a, int **b)
{
	int	next;

	if ((*a)[1] < (*a)[2] && (*a)[2] < (*a)[3]
			&& (*a)[3] < (*a)[4] && (*a)[4] < (*a)[5])
		return ;
	action_pb(a, b);
	action_pb(a, b);
	solve_3(*a);
	next = (*b)[1] + 1;
	if (next == 6)
		next = 1;
	if (next == (*b)[2])
		next++;
	if (next == 6)
		next = 1;
	if ((*a)[3] == next)
		action_rra(*a);
	else
		while ((*a)[1] != next)
			action_ra(*a);
	action_pa(a, b);
	solve_5_bis(a, b, next);
}

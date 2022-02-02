#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

void	check_error(int argc, char **argv);

void	solve_2(int *a);

void	solve_3(int *a);

void	solve_5_bis(int	**a, int **b, int next);

void	solve_5(int **a, int **b);

void	sort(int **a, int **b);

void	sort_bit(int **a, int **b, size_t bit, int *p);

void	action_s_(int *stack);

void	action_sa(int *a);

void	action_sb(int *b);

void	action_ss(int *a, int *b);

void	action_p_(int **a, int **b);

void	action_pa_p(int **a, int **b, int *p);

void	action_pa(int **a, int **b);

void	action_pb_p(int **a, int **b, int *p);

void	action_pb(int **a, int **b);

void	action_r_(int *stack);

void	print_pa_pb(int *p);

void	action_ra_p(int *a, int *p);

void	action_ra(int *a);

void	action_rb(int *b);

void	action_rr(int *a, int *b);

void	action_rr_(int *stack);

void	action_rra(int *a);

void	action_rrb(int *b);

void	action_rrr(int *a, int *b);

int		ft_atoi(const char *nptr);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif

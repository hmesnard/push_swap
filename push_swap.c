#include "push_swap.h"

int	position(int nbr, char **argv, int size)
{
	size_t	i;
	int		res;

	i = 1;
	res = 1;
	while (i <= (size_t)size)
	{
		if (ft_atoi(argv[i]) < nbr)
			res++;
		i++;
	}
	return (res);
}

void	fill_a(int *a, char **argv)
{
	size_t	i;

	i = 1;
	while (i <= (size_t)a[0])
	{
		a[i] = position(ft_atoi(argv[i]), argv, a[0]);
		i++;
	}
}

void	init_a_b(int **a, int **b, int argc)
{
	*a = malloc(argc * sizeof(int));
	if (!*a)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	(*a)[0] = argc - 1;
	*b = malloc(sizeof(int));
	if (!*b)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	(*b)[0] = 0;
}

int	main(int argc, char **argv)
{
	int	*a;
	int	*b;

	check_error(argc, argv);
	init_a_b(&a, &b, argc);
	fill_a(a, argv);
	if (a[0] == 2)
		solve_2(a);
	else if (a[0] == 3)
		solve_3(a);
	else if (a[0] == 5)
		solve_5(&a, &b);
	else
		sort(&a, &b);
	free(a);
	free(b);
	return (0);
}

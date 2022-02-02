#include "push_swap.h"

int	overflow(char *str)
{
	unsigned long long	nbr;
	size_t				i;
	int					sign;

	nbr = 0;
	i = 0;
	sign = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		if (nbr > (2147483647 + (unsigned int)sign))
			return (1);
		i++;
	}
	return (0);
}

int	doublon(int argc, char **argv, int i)
{
	int	nbr;

	nbr = ft_atoi(argv[i]);
	while (++i < argc)
	{
		if (nbr == ft_atoi(argv[i]))
			return (1);
	}
	return (0);
}

void	check_error(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (!(('0' <= argv[i][0] && argv[i][0] <= '9')
					|| (argv[i][0] == '-'
						&& ('0' <= argv[i][1] && argv[i][1] <= '9')))
				|| overflow(argv[i]) || doublon(argc, argv, i))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
}

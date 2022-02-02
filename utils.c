#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int					i;
	unsigned long long	nb;
	int					sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		if (nptr[i++] == '-')
			sign = -1;
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i++] - 48);
		if (nb > 9223372036854775807)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
	}
	return (nb * sign);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if ((dest || src) && (dest != src))
	{
		if (src < dest)
			while (n--)
				*((char *)dest + n) = *((char *)src + n);
		else
		{
			while (i < n)
			{
				*((char *)dest + i) = *((char *)src + i);
				i++;
			}
		}
	}
	return (dest);
}

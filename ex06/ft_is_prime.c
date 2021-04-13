int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	sqrt = 0;
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if (i == nb)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

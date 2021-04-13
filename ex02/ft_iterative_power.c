int	ft_iterative_power(int nb, int power)
{
	int i;
	int num;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		num = nb;
		while (i < power)
		{
			num *= nb;
			i++;
		}
		return (num);
	}
}

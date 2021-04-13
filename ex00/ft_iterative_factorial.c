int	ft_iterative_factorial(int nb)
{
	int i;
	int num;

	if (nb <= 0)
		return (0);
	i = 1;
	num = 1;
	while (i <= nb)
		num *= i++;
	return (num);
}

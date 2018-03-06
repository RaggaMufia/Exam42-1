
int	ft_atoi(char *str)
{
	int		v;
	int		n;

	if (*str == '-')
	{
		str++;
		n = 1;
	}
	v = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
			v = (v * 10) + (*str - '0');
		else
			return (0);
		str++;
	}
	return ((v > 0 && n ? -v : v));
}

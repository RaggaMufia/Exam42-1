
int		max(int *tab, unsigned int len)
{
	int		i;
	int		max_value;

	if (!tab)
		return (0);
	i = 0;
	while (len--)
	{
		if (tab[i] > tab[i + 1])
			max_value = tab[i];
		i += 1;
	}
	return (max_value);
}

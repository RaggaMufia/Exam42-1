
void			sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	smallest;
	int				tmp;

	i = 0;
	while (i < size)
	{
		smallest = i;
		j = i;
		while (++j < size)
			if (tab[j] < tab[smallest])
				smallest = j;
		tmp = tab[i];
		tab[i] = tab[smallest];
		tab[smallest] = tmp;
		i++;
	}
}

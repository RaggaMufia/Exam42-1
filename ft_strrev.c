
char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	size--;
	while (i < size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		i++;
		size--;
	}
	return (str);
}

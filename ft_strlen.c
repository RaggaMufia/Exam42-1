
int	ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}

char		*ft_strcpy(char *s1, char *s2)
{
	char *tmp;

	tmp = s1;
	while (*s2)
		*s1++ = *s2++;
	return (tmp);
}

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			my_putchar(str[i] - ('a' - 'A'));
		else if (str[i] >= 'A' && str[i] <= 'Z')
			my_putchar(str[i] - ('A' - 'a'));
		else
			my_putchar(str[i]);
		i++;
	}
}

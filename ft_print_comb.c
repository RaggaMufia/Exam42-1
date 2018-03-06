
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ad_print_space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ad_print_numbers(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ad_print_numbers(c, d, u);
				if (!(c == '7' && d == '8' && u == '9'))
				{
					ad_print_space();
				}
				u++;
			}
			d++;
		}
		c++;
	}
}

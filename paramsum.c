
void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(int nb)
{
	if (nb >= 10)
		my_putnbr(nb / 10);
	my_putchar('0' + (nb % 10));
}

int		main(int argc)
{
	my_putnbr(argc - 1);
	my_putchar('\n');
	return (0);
}

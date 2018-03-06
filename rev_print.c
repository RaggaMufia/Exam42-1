
#include <unistd.h>

int		main(int argc, char **argv)
{
	char	n;
	int		size;

	n = '\n';
	if (argc != 2)
		return (write(1, &n, 1));
	else
	{
		size = 0;
		while (argv[1][size])
			size++;
		size--;
		while (size >= 0)
		{
			write(1, &argv[1][size], 1);
			size--;
		}
		write(1, &n, 1);
	}
	return (0);
}

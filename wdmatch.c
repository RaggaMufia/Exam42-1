
#include <unistd.h>

int				main(int argc, char **argv)
{
	int				i;
	int				j;

	if (argc == 3)
	{
		i = -1;
		j = 0;
		while (argv[1][++i] != '\0')
		{
			while (argv[2][j] != argv[1][i] && argv[2][j] != '\0')
				j++;
			if (argv[1][i] != argv[2][j])
				break ;
		}
		if (argv[1][i] == '\0')
			write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}

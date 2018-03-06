#include <unistd.h>

int			main(int argc, char **argv)
{
	write(1, "z\n", 2);
	(void)argc;
	(void)argv;
	return (0);
}

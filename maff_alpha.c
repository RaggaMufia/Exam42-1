
#include <unistd.h>

int		main(void)
{
	char min;
	char maj;
	int i;

	min = 'a';
	maj = 'B';
	i = 0;
	while (i <= 12)
	{
		write(1, &min, 1);
		write(1, &maj, 1);
		min = min + 2;
		maj = maj + 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

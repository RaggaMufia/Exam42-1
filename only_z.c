#include <unistd.h>

int		main(void)
{
	char lettre;
	
	lettre = 'z';
	write(1, &lettre, 1);
	return (0);
}

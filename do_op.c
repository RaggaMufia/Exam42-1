
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	do_op(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = atoi(nb1);
	n2 = atoi(nb2);
	n3 = 0;
	if (op[0] == '+')
		n3 = n1 + n2;
	else if (op[0] == '-')
		n3 = n1 - n2;
	else if (op[0] == '*')
		n3 = n1 * n2;
	else if (op[0] == '/')
		n3 = n1 / n2;
	else if (op[0] == '%')
		n3 = n1 % n2;
	printf("%d\n", n3);
}

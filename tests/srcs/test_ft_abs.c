#include "libft.h"

static int comp(unsigned int a, unsigned int b)
{
	ft_putnbr(a);
	ft_putstr(" == ");
	ft_putnbr(b);
	ft_putchar('\n');
	return (a == b);
}

int main()
{
	int values[] = {-2147483648, -5, 5, 2147483647, 0};
	unsigned int expected[] = {2147483648, 5, 5, 2147483647, 0};
	int i;

	i = 0;
	while (1)
	{
		if (!comp(ft_abs(values[i]), expected[i]))
			return (1);
		++i;
		if (values[i] == 0)
			break ;
	}
	
	return (0);
}

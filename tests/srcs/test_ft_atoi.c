#include <stdlib.h>
#include "libft.h"

static int comp(int a, int b)
{
	ft_putnbr(a);
	ft_putstr(" == ");
	ft_putnbr(b);
	ft_putchar('\n');
	return (a == b);
}

int main()
{
	char *values[] = {
		"-2147483648",
		"-5",
		"5",
		"2147483647",
		"abc",
		"-58text9",
		"-2147483649",
		"-2147483650",
		"-2147483660",
		"2147483650",
		"2147483648",
		"42",
		"674832",
		"--3161631",
		"+426161",
		"++2626",
		"+et4",
		"+-+-+-+--62727",
		0};
	int i;

	i = 0;
	while (1)
	{
		// if (!comp(ft_atoi(values[i]), expected[i]))
		// 	return (1);
		if (!comp(ft_atoi(values[i]), atoi(values[i])))
			return (1);
		++i;
		if (values[i] == 0)
			break;
	}

	return (0);
}

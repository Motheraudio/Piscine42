#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	x;

	x = 'a';
	while (x >= 'a' && x <= 'z')
	{
		write(1, &x, 1);
		x++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}

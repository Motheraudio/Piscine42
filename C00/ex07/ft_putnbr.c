#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;
	n = nb; // we will operate with a long int called n to handle the INTMIN/INTMAX conversion isssues.
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1; // printing "-", then converting the int to positive to operate.
	}
	if (n >=0 && n <= 9)
		ft_putchar(n + '0'); // adding the char 0 converts the int into it's ASCII char equivalent.
		// This is our base case for the recursion.
	if	(n > 9)
	{
	ft_putnbr(n / 10); // this recursion divides until it reaches the left-most number and prints it.
	ft_putnbr (n % 10); // this recursion prints from the second number on until the end.
	// if this concept is hard to understand, look up "recursion in C".
	}
}
/*
int	main(void)
{
	ft_putnbr(-290489);
}
*/

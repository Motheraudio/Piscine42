void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main()
{
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;
	
	a = 42;
	b = 24;
	ptra = &a;
	ptrb = &b;
	printf("before the swap: %d and %d\n", a, b);
	ft_swap(ptra, ptrb);
	printf("After the swap: %d and %d\n", a, b);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
#include <stdio.h>
int	main()
{
	int a;
	int b;
	int	*ptrdiv;
	int	*ptrmod;

	a = 65;
	b = 10;
	ptrdiv = &a;
	ptrmod = &b;

	ft_ultimate_div_mod(ptrdiv, ptrmod);
	printf("Div: %d, Mod: %d\n", a, b);
}
*/

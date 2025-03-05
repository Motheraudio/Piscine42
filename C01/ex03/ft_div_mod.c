void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main()
{
	int div;
	int mod;
	int	*ptrdiv;
	int	*ptrmod;

	ptrdiv = &div;
	ptrmod = &mod;

	ft_div_mod(65, 10, ptrdiv, ptrmod);
	printf("Div: %d, Mod: %d\n", div, mod);
}
*/

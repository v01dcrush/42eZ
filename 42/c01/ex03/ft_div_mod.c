#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int a, b, *div, *mod;

	a = 4;
	b = 3;
	div = &a;
	mod = &b;
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	write(1, " ", 1);
	ft_div_mod(a, b, div, mod);
	ft_putchar('0' + *div);
	ft_putchar('0' + *mod);
	return 0;
}*/

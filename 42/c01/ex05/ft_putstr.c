#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main()
{
	int	d;
	int	e;
	int	*a;
	int	*b;

	d = 4;
	e = 3;
	ft_putchar('0' + d);
	ft_putchar('0' + e);
	write(1, " ", 1);
	a = &d;
	b = &e;
	ft_swap(a, b);
	ft_putchar('0' + d);
	ft_putchar('0' + e);
	return 0;
}*/

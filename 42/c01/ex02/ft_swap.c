#include <unistd.h>

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_swap(int *a, int *b)
{	
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int	main()
{
	int	*a;
	int	*b;

	*a = 4;
	*b = 3;
	ft_swap(*a, *b);
	ft_putchar('0' + *a);
	ft_putchar('0' + *b);
	return 0;
}

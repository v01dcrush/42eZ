/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:11:56 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/14 22:33:45 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
        write(1, "-2147483648", 11);
        return;
        }
        if (nb < 0)
        {
        ft_putchar('-');
        nb = -nb;
        }
        if (nb > 9)
                ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
}

void	ft_writenumcomb(int a)
{
	ft_putchar ('0' + (a/10));
	ft_putchar ('0' + (a%10));
	write (1, " ", 1);
	ft_putchar ('0' + (b/10));
        ft_putchar ('0' + (b%10));
}

void	ft_print_combn(int n)
{
	int a;
	
	if(n > 0 && n < 10)
	{
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_writenumcomb(a, b);
			if (a!=98)
				write(1,", ", 2);
			else
				write(1, "\n", 1);
			b++;
		}
	a++;	
	}
}

/*int	main()
{
	ft_print_combn();
	return 0;
}*/

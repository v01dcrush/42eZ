/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:11:56 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/16 19:34:33 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_writenumcomb(int a, int b)
{
	ft_putchar ('0' + (a / 10));
	ft_putchar ('0' + (a % 10));
	write (1, " ", 1);
	ft_putchar ('0' + (b / 10));
	ft_putchar ('0' + (b % 10));
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_writenumcomb(a, b);
			if (a != 98)
				write(1, ", ", 2);
			else
				write(1, "\n", 1);
			b++;
		}
		a++;
	}
}

/*int	main()
{
	ft_print_comb2();
	return 0;
}*/

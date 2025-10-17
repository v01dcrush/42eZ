/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:17:57 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/17 21:20:59 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*int	main()
{
	int a, b;

	a = 4;
	b = 3;
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	write(1, " ", 1);
	ft_ultimate_div_mod(&a, &b);
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	return 0;
}*/

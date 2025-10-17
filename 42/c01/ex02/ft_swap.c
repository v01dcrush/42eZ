/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:16:14 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/17 21:19:16 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	c;

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

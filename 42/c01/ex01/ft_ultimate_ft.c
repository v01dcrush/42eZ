/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:54:38 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/17 21:15:40 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*nt	main()
{
	int	a;
	int	 *b;
	int	 **c;
	int	 ***d;
	int	 ****e;
	int	 *****f;
	int	 ******g;
	int	 *******h;
	int	 ********i;
	int	 *********j;

	a = 784;
	j = &i;
	i = &h;
	h = &g;
	g = &f;
	f = &e;
	e = &d;
	d = &c;
	c = &b;
	b = &a;
	ft_ultimate_ft(j);
	ft_putchar('0' + (a/10));
	ft_putchar('0' + (a%10));
	return 0;
}*/

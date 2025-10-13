/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:11:56 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/13 07:01:45 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int	i;

	i = 0;
	while (i <= 789)
	{
		a = (i - (i % 100)) / 100;
		b = ((i % 100) - (i % 10)) / 10;
		c = i % 10;
		i = (a * 100) + (b * 10) + c;		
		if (b < a)
		{
			b = a + 1;
		}
		else if ( c < b && b != 9)
		{
			c = b + 1;
		}
		else
		{
			c++;
		}
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		i++;
	}
	if (i == 789)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

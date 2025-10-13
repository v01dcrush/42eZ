/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:11:56 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/13 22:02:41 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';

	while (a <= 789)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;		
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
			a++;
			b = a + 1;
			c = b + 1;
		}
		i = (a * 100) + (b * 10) + c;
		write (1,"%d" &a, 1);
		write (1,"%d" &b, 1);
		write (1,"%d" &c, 1);
		i++;
	}
	if (i == 789)
	{
		write (1, "\n", 1);
	}
	else
	{
		write (1, ", ", 2);
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

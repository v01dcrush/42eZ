/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: griyesay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:01:38 by griyesay          #+#    #+#             */
/*   Updated: 2025/10/12 18:26:25 by griyesay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int length, char first, char middle, char last)
{
	int	k;

	k = 0;
	while (k < length)
	{
		if (k == 0)
			ft_putchar(first);
		else
		{
			if (k == length - 1)
				ft_putchar(last);
			else
				ft_putchar(middle);
		}
		k++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				draw_line(x, 'A', 'B', 'C');
			else
				draw_line(x, 'B', ' ', 'B');
		}
		i++;
	}
}

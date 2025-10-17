/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrkara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:33:48 by andrkara          #+#    #+#             */
/*   Updated: 2025/10/17 23:04:27 by andrkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = c;
		i++;
	}
}

/*int	main()
{
	int	i;
	int	b;
	
	i = 0;
	b = 7;
	int a[] = {9, 42, -13, 2, 7, 87, -47}; 
	ft_rev_int_tab(a, b);
	while (i < b)
	{
		printf("%d, ", a[i]);
		i++;
	}
	return 0;
}*/

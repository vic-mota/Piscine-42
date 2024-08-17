/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 21:20:43 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/03 21:49:46 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	conditions(int x, int y, int l, int c)
{
	if (l == 0 && c == 0)
		ft_putchar('A');
	else if ((l == 0 || l == y - 1) && (c != 0 && c != x - 1))
		ft_putchar('B');
	else if (l == 0 && c == x - 1)
		ft_putchar('C');
	else if ((l != 0 && l != y - 1) && (c == 0 || c == x - 1))
		ft_putchar('B');
	else if ((l != 0 && l != y - 1) && (c != 0 && c != x - 1))
		ft_putchar(' ');
	else if (l == y - 1 && c == x - 1)
		ft_putchar('A');
	else if (l == y - 1 && c == 0)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	while (l < y)
	{
		c = 0;
		while (c < x)
		{
			conditions(x, y, l, c);
			c++;
		}
		if (x > 0)
			ft_putchar('\n');
		l++;
	}
}

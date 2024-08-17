/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dleite-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:39:21 by dleite-k          #+#    #+#             */
/*   Updated: 2024/08/04 18:48:25 by dleite-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

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
			if ((l == 0 || l == y - 1) && (c == 0 || c == x - 1))
				ft_putchar('o');
			else if ((l == 0 || l == y - 1) && (c != 0 && c != x - 1))
				ft_putchar('-');
			else if ((l != 0 && l != y - 1) && (c == 0 || c == x - 1))
				ft_putchar('|');
			else if ((l != 0 && l != y - 1) && (c != 0 && c != x - 1))
				ft_putchar(' ');
			c++;
		}
		if (x > 0)
		{
			ft_putchar('\n');
		}
		l++;
	}
}

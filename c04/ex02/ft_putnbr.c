/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:39:03 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/10 19:40:24 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
	}
	c = nb % 10 + '0';
	write (1, &c, 1);
}
/*
int main(void)
{
	ft_putnbr(-4254941);
	printf("\n");
	
	ft_putnbr(-42);
	printf("\n");
	
	ft_putnbr(-2147483648);
	printf("\n");
	
	ft_putnbr(2147483647);
	printf("\n");
}*/

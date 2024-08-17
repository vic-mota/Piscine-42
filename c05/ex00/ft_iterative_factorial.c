/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:37:11 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/13 12:46:01 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

/*int main()
{
	printf("%d", ft_iterative_factorial(4));
}*/

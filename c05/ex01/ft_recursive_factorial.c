/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:38:42 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/13 15:02:10 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		nb = nb * (ft_recursive_factorial(nb - 1));
	}
	return (nb);
}

/*int main()
{
	printf("%d", ft_recursive_factorial(4));
}*/

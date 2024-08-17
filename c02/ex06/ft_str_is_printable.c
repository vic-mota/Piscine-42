/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valyssa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:39:48 by valyssa-          #+#    #+#             */
/*   Updated: 2024/08/06 14:10:35 by valyssa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main()
{
	char str1[] = "Hello";
	char str2[] = "Hello€123";

	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));

	return 0;
}*/
